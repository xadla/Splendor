#include "Game.h"

Game::Game(Client *host, int id, QObject *parent)
    : QThread{parent}
{

    _id = id;
    _host = host;
    bots = 0;

    players.append(host);

}

void Game::add_player(Client *player)
{
    if (players.size() <= 4 - bots)
        players.append(player);
    else
        qDebug() << "Game is full";
}

void Game::add_bot()
{
    if (players.size() <= 4 - bots)
        bots++;
    else
        qDebug() << "Game is full";
}
