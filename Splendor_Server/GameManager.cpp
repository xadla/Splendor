#include "GameManager.h"

GameManager::GameManager(QObject *parent)
    : QObject{parent}
{
    id = 1;
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
