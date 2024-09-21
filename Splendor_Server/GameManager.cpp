#include "GameManager.h"

GameManager::GameManager(QObject *parent)
    : QObject{parent}
{
    id = 1;
}

GameManager::~GameManager()
{
    foreach(Game* g, games) {
        delete g;
    }
}

void GameManager::new_game(Client *host)
{
    Game *newGame = new Game(host, id++);
    games.append(newGame);
    newGame->start();
    qDebug() << "host created";
    emit host_created(host);
}

void GameManager::join_in_game(Client* player, const QString &hostName)
{
    foreach (auto game, games) {
        if (game->get_host_username() == hostName) {
            game->add_player(player);
            emit connect_to_host(player, hostName);
        }
    }
}

void GameManager::send_message_game(Client *player, const QString &message)
{
    foreach (auto game, games) {
        if (game->is_player_in_game(player)) {
            game->send_to_all(message, player);
        }
    }
}

QList<QString> GameManager::all_games()
{
    QList<QString> result;
    foreach (Game* game, games) {
        result.append(game->get_host_username());
    }
    return result;
}

void GameManager::disconnect_user(Client *client)
{
    foreach(Game* game, games) {
        if (game->is_player_in_game(client)) {
            game->remove_player(client);
            game->send_to_all(client->get_useranme() + " is left the game", client);
        }
    }
}

void GameManager::delete_host(Client *client)
{
    for (int i = 0; i < games.size(); i++) {
        if (games[i]->get_host_username() == client->get_useranme()) {
            games[i]->quit();
            games[i]->wait();
            delete games[i];
            games.removeAt(i);
            emit host_deleted(client->get_useranme());
            return;
        }
    }
}
