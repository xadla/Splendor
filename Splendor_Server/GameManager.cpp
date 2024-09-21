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
            emit connect_to_host(player);
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
