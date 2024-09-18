#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QByteArray>
#include <QThread>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QTcpSocket *socket, int id, QObject *parent = nullptr);
    void send_message(const QString &message);
    void data_ready_read();
    void process_handle_server(const QString& mes);
    int get_id();

signals:
    void send_data_to_server(const QString& data);
    void send_to_this_client(const QString &mes, Client* client);

private:
    QTcpSocket* _socket;
    int _id;

};

#endif // CLIENT_H
