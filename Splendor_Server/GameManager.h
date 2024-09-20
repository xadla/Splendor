#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <QObject>
#include <QList>

#include "Game.h"
#include "Client.h"

class GameManager : public QObject
{
    Q_OBJECT
public:
    explicit GameManager(QObject *parent = nullptr);
    void new_game(Client *host);
    void join_in_game(Client* player, const QString& hostName);

signals:
    void connect_to_host(Client* player);
    void host_created(Client* host);

private:
    QList<Game *> games;
    int id;
};

#endif // GAMEMANAGER_H
