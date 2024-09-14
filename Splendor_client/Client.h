#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTcpSocket>
#include <QByteArray>
#include <QDebug>
#include <QStringList>

class Client : public QObject
{
    Q_OBJECT
public:
    Client(QObject* parent = nullptr);
    void send_message(const QString &message);

signals:
    void username_error_register(const QString& e_text);
    void email_error_register(const QString& e_text);
    void ckeck_passed_register();

private slots:
    void on_ready_read();

private:
    QTcpSocket *socket;

    void connect_to_host(const QHostAddress &address, qint16 port);
    void register_process(const QStringList& mes);
};

#endif // CLIENT_H
