#include "HandleServer.h"

HandleServer::HandleServer(QObject *parent)
    : QObject{parent}
{}

void HandleServer::check_registration(const QString &username, const QString &email)
{
    QFile file("../../users.json");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Could not open file for reading:" << file.errorString();
        return;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument jsonDoc(QJsonDocument::fromJson(jsonData));
    if (jsonDoc.isNull()) {
        qDebug() << "Failed to create JSON doc.";
        return;
    }

    if (jsonDoc.isObject()) {
        QJsonObject jsonObject = jsonDoc.object();
        QJsonArray usersArray = jsonObject["users"].toArray();

        for (const QJsonValue &value : usersArray) {
            QJsonObject userObject = value.toObject();

            if (userObject["username"] == username){
                emit send_to_server("Username duplicate");
                return;
            } else if (userObject["email"] == email){
                emit send_to_server("Email duplicate");
                return;
            }
        }
        emit send_to_server("All Checked " + username);
        return;
    }
}

void HandleServer::save_data_registration(const QStringList &data)
{

    QJsonObject userObject;
    userObject["first_name"] = data[1];
    userObject["last_name"] = data[2];
    userObject["username"] = data[3];
    userObject["email"] = data[4];
    userObject["password"] = data[5];

    QFile file("../../users.json");

    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Could not open the file for reading and writing.";
        return;
    }

    QByteArray fileData = file.readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(fileData);
    QJsonArray usersArray;

    if (jsonDoc.isObject()) {
        QJsonObject jsonObj = jsonDoc.object();
        if (jsonObj.contains("users")) {
            usersArray = jsonObj["users"].toArray();
        }
    } else {
        qDebug() << "JSON format is invalid.";
        return;
    }

    usersArray.append(userObject);

    QJsonObject updatedJsonObj;
    updatedJsonObj["users"] = usersArray;

    QJsonDocument updatedJsonDoc(updatedJsonObj);
    file.resize(0);
    file.write(updatedJsonDoc.toJson());
    file.close();

    qDebug() << "User data saved successfully.";
}

void HandleServer::check_login(const QString &username, const QString &password)
{
    QFile file("../../users.json");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Could not open file for reading:" << file.errorString();
        return;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument jsonDoc(QJsonDocument::fromJson(jsonData));
    if (jsonDoc.isNull()) {
        qDebug() << "Failed to create JSON doc.";
        return;
    }

    if (jsonDoc.isObject()) {
        QJsonObject jsonObject = jsonDoc.object();
        QJsonArray usersArray = jsonObject["users"].toArray();

        for (const QJsonValue &value : usersArray) {
            QJsonObject userObject = value.toObject();

            if (userObject["username"] == username){
                if (userObject["password"] == password) {
                    emit send_to_server("Login " + username);
                    return;
                } else{
                    emit send_to_server("Password wrong");
                    return;
                }
            }

        }
    }
    emit send_to_server("User not found");
}
