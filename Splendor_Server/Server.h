#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QByteArray>

#include "Client.h"
#include "GameManager.h"

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    ~Server();

private:
    QTcpServer _server;
    bool _isStarted;

    // client
    QList<Client *> _socketsList;
    void on_client_connecting();

    // game
    GameManager gameManager;
    void add_player_to_host(Client* player, const QString& hostName);
    void host_created(Client *host);
    void resend_hosts(Client *giver);
    void host_deleted(const QString& hostName);

};

#endif // SERVER_H
