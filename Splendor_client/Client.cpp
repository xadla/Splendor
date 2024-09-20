#include "Client.h"

Client::Client(QObject *parent): QObject(parent), socket(new QTcpSocket(this)) {
    connect(socket, &QTcpSocket::connected, this, &Client::connected_signal);
    connect(socket, &QTcpSocket::readyRead, this, &Client::on_ready_read);
    this->connect_to_host(QHostAddress::Any, 8080);
}

void Client::send_message(const QString &message)
{
    if (socket->state() == QAbstractSocket::ConnectedState){
        socket->write(message.toUtf8());
    } else{
        qDebug() << "Socket is not in a connected state!";
    }
}

void Client::connect_to_host(const QHostAddress &address, qint16 port)
{
    if (socket->state() == QAbstractSocket::UnconnectedState) {
        socket->connectToHost(address, port);
    } else {
        qDebug() << "Socket already connected or is in the process of connecting!";
    }
}

void Client::on_ready_read()
{
    auto socket = qobject_cast<QTcpSocket *>(sender());
    QString data = QString(socket->readAll());
    qDebug() << data;

    QStringList listData = data.split(" ");
    if (listData[0] == "Registration"){
        register_process(listData);
        return;
    } else if (listData[0] == "Login"){
        login_process(listData);
    } else if (listData[0] == "Game") {
        game_process(listData);
    }

}

void Client::connected_signal()
{
    if (socket->state() == QAbstractSocket::UnconnectedState) {
        return;
    } else {
        emit connected();
    }
}

void Client::register_process(const QStringList& mes)
{
    if (mes[1] == "Username") {
        emit username_error_register("A User with this Username is exist!");
        return;
    } else if (mes[1] == "Email") {
        emit email_error_register("A User with this Email is exist!");
        return;
    } else {
        emit ckeck_passed_register();
        return;
    }
}

void Client::login_process(const QStringList &mes)
{
    if (mes[1] == "Successfull") {
        emit login_successfull();
        return;
    } else if (mes[1] == "Password") {
        emit password_wrong_login();
        return;
    } else if (mes[1] == "User") {
        emit user_not_found_login();
        return;
    }
}

void Client::game_process(const QStringList &mes)
{
    if (mes[1] == "Host") {
        emit host_create_successfull();
        return;
    } else if (mes[1] == "Join") {
        return;
    }
}
