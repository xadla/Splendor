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
    }

}
