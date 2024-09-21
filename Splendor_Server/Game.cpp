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

QString Game::get_host_username()
{
    return _host->get_useranme();
}

bool Game::is_player_in_game(Client *player)
{
    foreach(Client* p, players) {
        if (p == player) {
            return true;
        }
    }
    return false;
}

void Game::send_to_all(const QString &mes, Client* sender)
{
    foreach (Client* cl, players) {
        if(sender->get_useranme() != cl->get_useranme()) {
            cl->send_message("Game Message " + mes);
        }
    }
}

void Game::remove_player(Client *player)
{
    for(int i = 0; i < players.size(); i++) {
        if (players[i]->get_useranme() == player->get_useranme()) {
            players.removeAt(i);
            return;
        }
    }
}
