#ifndef PROCESS_H
#define PROCESS_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QStringList>

class Process : public QObject
{
    Q_OBJECT
public:
    explicit Process(QObject *parent = nullptr);
    void message_process(const QString &message);

signals:
    void check_registration(const QString &username, const QString &email);
    void save_data_registeration(const QStringList& data);
    void check_login(const QString &username, const QString &password);
    void create_game();
    void join_game(const QString &host_name);
    void message_to_game(const QString &mes);
    void resend_hosts();
    void disconnect();
    void delete_game();

};

#endif // PROCESS_H
