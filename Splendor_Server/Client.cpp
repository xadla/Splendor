#include "Client.h"

Client::Client(QTcpSocket *socket, int id, QObject *parent)
    : QObject{parent}
{
    _socket = socket;
    _id = id;
}

void Client::data_ready_read()
{
    auto socket = qobject_cast<QTcpSocket *>(sender());
    auto data = QString(socket->readAll());
    qDebug() << data;
    emit send_data_to_server(data);
}

void Client::process_handle_server(const QString &mes)
{
    QStringList listMes = mes.split(" ");
    if (listMes[0] == "Username"){
        emit send_to_this_client("Registration Username duplicate", this);
        return;
    } else if (listMes[0] == "Email") {
        emit send_to_this_client("Registration Email duplicate", this);
        return;
    } else if (listMes[0] == "All") {
        emit send_to_this_client("Registration All Completed", this);
        return;
    } else if (listMes[0] == "Login"){
        emit send_to_this_client("Login Successfull", this);
        return;
    } else if (listMes[0] == "Password") {
        emit send_to_this_client("Login Password Wrong", this);
        return;
    } else if (listMes[0] == "User"){
        emit send_to_this_client("Login User not found", this);
        return;
    }
}

int Client::get_id()
{
    return _id;
}

void Client::send_message(const QString &message) {
    QByteArray message_byte = message.toLocal8Bit();
    const char* modified_message = message_byte.data();
    _socket->write(modified_message);
    if (_socket->waitForBytesWritten()){
        qDebug() << "Data sent successfully.";
    } else{
        qDebug() << "Error sending data.";
    }
}
