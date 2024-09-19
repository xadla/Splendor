#ifndef GAME_H
#define GAME_H

#include <QThread>
#include <QList>

#include "Client.h"

class Game : public QThread
{
public:
    explicit Game(Client *host, int id, QObject *parent = nullptr);
    void add_player(Client* player);
    void add_bot();

private:
    int _id;
    Client* _host;
    QList<Client *> players;
    int bots;

};

#endif // GAME_H
