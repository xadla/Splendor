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
    Client* client = new Client(socket);
    _socketsList.append(client);
    socket->write("Welcome to this server");

    // for create game
    connect(client, &Client::create_game_signal, &gameManager, &GameManager::new_game);

}
