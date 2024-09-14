#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QByteArray>

#include "Process.h"
#include "Client.h"
#include "HandleServer.h"

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    ~Server();

private:
    QTcpServer _server;
    bool _isStarted;
    QList<Client *> _socketsList;
    void on_client_connecting();

    Process process;
    HandleServer handle;

signals:
};

#endif // SERVER_H
