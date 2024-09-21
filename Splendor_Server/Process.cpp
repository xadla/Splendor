#include "Process.h"

Process::Process(QObject *parent)
    : QObject{parent}
{}

void Process::message_process(const QString &message)
{
    QStringList listData = message.split(" ");

    if (listData[0] == "Check"){
        emit check_registration(listData[2], listData[3]);
        return;
    } else if (listData[0] == "Register") {
        emit save_data_registeration(listData);
        return;
    } else if (listData[0] == "Login") {
        emit check_login(listData[1], listData[2]);
        return;
    } else if (listData[0] == "Create") {
        emit create_game();
        return;
    } else if (listData[0] == "Join") {
        emit join_game(listData[1]);
        return;
    } else if (listData[0] == "Message") {
        QString modifiedMessage = "";
        for(int i = 2; i < listData.size(); i++) {
            modifiedMessage += listData[i] + " ";
        }
        emit message_to_game(modifiedMessage);
        return;
    } else if (listData[0] == "Refresh") {
        emit resend_hosts();
        return;
    } else if (listData[0] == "Disconnect") {
        emit disconnect();
        return;
    } else if (listData[0] == "Delete") {
        emit delete_game();
        return;
    }

}
