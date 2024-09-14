#include "Server.h"

Server::Server(QObject *parent)
    : QObject{parent}
{
    connect(&_server, &QTcpServer::newConnection, this, &Server::on_client_connecting);
    _isStarted = _server.listen(QHostAddress::Any, 8080);
    if (!_isStarted){
        qDebug() << "Server could not start";
    } else{
        qDebug() << "Server started...";
    }

    connect(&process, &Process::check_registration, &handle, &HandleServer::check_registration);
    connect(&process, &Process::save_data_registeration, &handle, &HandleServer::save_data_registration);
}

Server::~Server()
{
    foreach (auto client, _socketsList) {
        delete client;
    }
}

void Server::on_client_connecting(){
    qDebug() << "a Client connected to server";
    auto socket = _server.nextPendingConnection();
    Client* client = new Client();
    client->set_socket(socket);
    connect(socket, &QTcpSocket::readyRead, client, &Client::data_ready_read);
    connect(client, &Client::send_data_to_server, &process, &Process::message_process);
    connect(&handle, &HandleServer::send_to_server, client, &Client::process_handle_server);
    _socketsList.append(client);
    socket->write("Well come to this server");
}
