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

    Ids = 1;

    connect(&process, &Process::check_registration, &handle, &HandleServer::check_registration);
    connect(&process, &Process::save_data_registeration, &handle, &HandleServer::save_data_registration);
    connect(&process, &Process::check_login, &handle, &HandleServer::check_login);
}

Server::~Server()
{
    foreach (auto client, _socketsList) {
        delete client;
    }
}

void Server::on_client_connecting() {
    qDebug() << "A Client connected to server.";
    auto socket = _server.nextPendingConnection();
    Client* client = new Client(socket, Ids++);
    _socketsList.append(client);

    connect(socket, &QTcpSocket::readyRead, client, &Client::data_ready_read);
    connect(client, &Client::send_data_to_server, &process, &Process::message_process);
    connect(client, &Client::send_to_this_client, this, &Server::send_specific_answer);
    connect(&handle, &HandleServer::send_to_server, client, &Client::process_handle_server);

    socket->write("Welcome to this server");
}

void Server::send_specific_answer(QString mes, Client *client) {
    qDebug() << "Attempting to send message to client ID:" << client->get_id() << "Message:" << mes;
    if (client) {
        qDebug() << "Sending message to client ID:" << client->get_id();
        client->send_message(mes);
    } else {
        qDebug() << "Client not found!";
    }
}
