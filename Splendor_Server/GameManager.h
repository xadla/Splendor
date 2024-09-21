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
    ~GameManager();
    void new_game(Client *host);
    void join_in_game(Client* player, const QString& hostName);
    void send_message_game(Client* player, const QString& message);
    QList<QString> all_games();
    void disconnect_user(Client* client);
    void delete_host(Client* client);

signals:
    void connect_to_host(Client* player, const QString &hostName);
    void host_created(Client* host);
    void host_deleted(const QString &hostName);

private:
    QList<Game *> games;
    int id;
};

#endif // GAMEMANAGER_H
