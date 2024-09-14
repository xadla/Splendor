#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QByteArray>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
    void set_socket(QTcpSocket* socket);
    void send_message(const QString &message);
    void data_ready_read();
    void process_handle_server(const QString& mes);

signals:
    void send_data_to_server(const QString& data);

private:
    QTcpSocket* _socket;

};

#endif // CLIENT_H
