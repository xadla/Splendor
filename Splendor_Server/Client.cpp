#include "Client.h"

Client::Client(QObject *parent)
    : QObject{parent}
{}

void Client::set_socket(QTcpSocket *socket)
{
    _socket = socket;
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
        send_message("Registration Username duplicate");
        return;
    } else if (listMes[0] == "Email") {
        send_message("Registration Email duplicate");
        return;
    } else if (listMes[0] == "All") {
        send_message("Registration All Completed");
        return;
    }
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
