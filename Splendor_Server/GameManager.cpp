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
}
