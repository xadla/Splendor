#include "Client.h"

Client::Client(QTcpSocket *socket, QObject *parent)
    : QObject{parent}
{
    _socket = socket;

    // register & login connections
    connect(_socket, &QTcpSocket::readyRead, this, &Client::data_ready_read);
    connect(&process, &Process::check_registration, &handle, &HandleServer::check_registration);
    connect(&process, &Process::save_data_registeration, &handle, &HandleServer::save_data_registration);
    connect(&process, &Process::check_login, &handle, &HandleServer::check_login);
    connect(this, &Client::send_data_to_server, &process, &Process::message_process);

    // respond connections
    connect(&handle, &HandleServer::send_to_server, this, &Client::process_handle_server);

    // game connections
    connect(&process, &Process::create_game, this, &Client::create_game);
    connect(&process, &Process::join_game, this, &Client::join_game);
    connect(&process, &Process::message_to_game, this, &Client::send_message_to_others);
    connect(&process, &Process::resend_hosts, this, &Client::refresh_hosts);
    connect(&process, &Process::disconnect, this, &Client::disconnect);
    connect(&process, &Process::delete_game, this, &Client::delete_host);
}

QString Client::get_useranme()
{
    return _username;
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
        _username = listMes[2];
        send_message("Registration All Completed");
        return;
    } else if (listMes[0] == "Login"){
        _username = listMes[1];
        send_message("Login Successfull");
        return;
    } else if (listMes[0] == "Password") {
        send_message("Login Password Wrong");
        return;
    } else if (listMes[0] == "User"){
        send_message("Login User not found");
        return;
    }
}

void Client::create_game()
{
    emit create_game_signal(this);
}

void Client::join_game(const QString &host_name)
{
    emit join_game_signal(this, host_name);
}

void Client::send_message_to_others(const QString &mes)
{
    emit signal_for_game_message(this, mes);
    return;
}

void Client::refresh_hosts()
{
    emit resend_hosts(this);
}

void Client::disconnect()
{
    emit disconnect_from_server(this);
}

void Client::delete_host()
{
    emit unHost(this);
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
