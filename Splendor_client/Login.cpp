#include "Login.h"
#include "ui_Login.h"

#include <QCryptographicHash>

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->error_lbl->setVisible(false);
}

Login::~Login()
{
    delete ui;
}

void Login::login_success()
{
    emit back_to_main(ui->username_le->text());
    return;
}

void Login::password_wrong()
{
    show_error_message("Password is wrong");
    return;
}

void Login::username_not_found()
{
    show_error_message("Username not found");
    return;
}

void Login::on_back_btn_clicked()
{
    emit back_to_main("");
}

void Login::on_login_btn_clicked()
{
    ui->error_lbl->setVisible(false);
    if (ui->username_le->text().isEmpty() || ui->password_le->text().isEmpty()) {
        return;
    } else {

        QByteArray hashPassword = QCryptographicHash::hash(ui->password_le->text().toLocal8Bit(), QCryptographicHash::Md5);
        QString hashedPassword = hashPassword.toHex();

        QString message = "Login " + ui->username_le->text() + " " + hashedPassword;
        emit send_message(message);
    }
}

void Login::show_error_message(const QString &mes)
{
    ui->error_lbl->setText(mes);
    ui->error_lbl->setVisible(true);
}

