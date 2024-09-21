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
    connect(&gameManager, &GameManager::host_deleted, this, &Server::host_deleted);

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
    connect(client, &Client::signal_for_game_message, &gameManager, &GameManager::send_message_game);
    connect(client, &Client::resend_hosts, this, &Server::resend_hosts);
    connect(client, &Client::disconnect_from_server, &gameManager, &GameManager::disconnect_user);
    connect(client, &Client::unHost, &gameManager, &GameManager::delete_host);

}

void Server::add_player_to_host(Client *player, const QString& hostName)
{
    foreach (Client* cl, _socketsList) {
        if (cl->_username == player->_username) {
            player->send_message("Game Join Accepted");
            qDebug() << "Player is joined";
            return;
        } else if (cl->_username == hostName) {
            cl->send_message("Game Add " + player->_username);
        }
    }
}

void Server::host_created(Client *host)
{
    foreach (Client* cl, _socketsList) {
        if (cl->_username == host->_username) {
            host->send_message("Game Host Created");
        } else {
            cl->send_message("Game NewHost " + host->get_useranme());
        }
    }
}

void Server::resend_hosts(Client *giver)
{
    foreach (QString name, gameManager.all_games()) {
        giver->send_message("Game NewHost " + name);
    }
}

void Server::host_deleted(const QString &hostName)
{
    foreach (Client* cl, _socketsList) {
        cl->send_message("Game Delete " + hostName);
    }
}
