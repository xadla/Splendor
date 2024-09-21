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
    friend class Server;
    friend class Game;
    Q_OBJECT
public:
    explicit Client(QTcpSocket *socket, QObject *parent = nullptr);
    QString get_useranme();

signals:
    void send_data_to_server(const QString& data);
    void send_to_this_client(const QString &mes, Client* client);
    void create_game_signal(Client *host);
    void join_game_signal(Client* player, const QString &host_name);
    void signal_for_game_message(Client* player, const QString& mes);
    void resend_hosts(Client* client);
    void disconnect_from_server(Client* client);
    void unHost(Client* client);

private:
    QTcpSocket* _socket;
    Process process;
    HandleServer handle;
    void send_message(const QString &message);
    void data_ready_read();
    void process_handle_server(const QString& mes);
    void create_game();
    void join_game(const QString &host_name);
    void send_message_to_others(const QString &mes);
    void refresh_hosts();
    void disconnect();
    void delete_host();

    QString _username;

};

#endif // CLIENT_H
