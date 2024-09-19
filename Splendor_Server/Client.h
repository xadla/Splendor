#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QByteArray>
#include <QThread>

#include "Process.h"
#include "HandleServer.h"

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QTcpSocket *socket, QObject *parent = nullptr);

signals:
    void send_data_to_server(const QString& data);
    void send_to_this_client(const QString &mes, Client* client);
    void create_game_signal(Client *host);

private:
    QTcpSocket* _socket;
    Process process;
    HandleServer handle;
    void send_message(const QString &message);
    void data_ready_read();
    void process_handle_server(const QString& mes);
    void create_game();

};

#endif // CLIENT_H
