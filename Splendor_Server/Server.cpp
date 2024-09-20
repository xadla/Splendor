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

    connect(&gameManager, &GameManager::connect_to_host, this, &Server::add_player_to_host);
    connect(&gameManager, &GameManager::host_created, this, &Server::host_created);

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
    connect(client, &Client::join_game_signal, &gameManager, &GameManager::join_in_game);

}

void Server::add_player_to_host(Client *player)
{
    foreach (Client* cl, _socketsList) {
        if (cl->_username == player->_username) {
            player->send_message("Game Join Accepted");
            return;
        }
    }
}

void Server::host_created(Client *host)
{
    foreach (Client* cl, _socketsList) {
        if (cl->_username == host->_username) {
            host->send_message("Game Host Created");
            return;
        }
    }
}
