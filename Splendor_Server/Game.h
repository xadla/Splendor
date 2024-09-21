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

    QString get_host_username();

    bool is_player_in_game(Client* player);
    void send_to_all(const QString &mes, Client* sender);

private:
    int _id;
    Client* _host;
    QList<Client *> players;
    int bots;

};

#endif // GAME_H
