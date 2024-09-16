#ifndef HANDLESERVER_H
#define HANDLESERVER_H

#include <QObject>
#include <QStringList>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>

class HandleServer : public QObject
{
    Q_OBJECT
public:
    explicit HandleServer(QObject *parent = nullptr);
    void check_registration(const QString &username, const QString &email);
    void save_data_registration(const QStringList& data);
    void check_login(const QString &username, const QString &password);

signals:
    void send_to_server(const QString &mes);

};

#endif // HANDLESERVER_H
