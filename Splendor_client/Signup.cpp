#include "Signup.h"
#include "ui_Signup.h"

Signup::Signup(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Signup)
{

    ui->setupUi(this);
    ui->error->setVisible(false);

}

Signup::~Signup()
{
    delete ui;
}

void Signup::show_error_message(const QString &error)
{
    ui->error->setText(error);
    ui->error->setVisible(true);
}

void Signup::register_account()
{
    QString password1 = ui->password_le->text();
    QString password2 = ui->cpassword_le->text();

    if (password1.length() < 8) {
        show_error_message("Password must be at least 8 character!");
        return;
    } else if (password1 != password2) {
        show_error_message("Passwords do not match!");
        return;
    } else{

        QByteArray hashPassword = QCryptographicHash::hash(password1.toLocal8Bit(), QCryptographicHash::Md5);

        QString hashedPassword = hashPassword.toHex();

        QString result = "Register " + ui->first_name_le->text() + " " + ui->last_name_le->text() + " ";
        result += ui->username_le->text() + " " + ui->email_le->text() + " " + QString(hashedPassword);
        emit send_message(result);
        emit back_to_home(ui->username_le->text());
        return;
    }
}

void Signup::on_pushButton_clicked()
{
    emit back_to_home("");
}

void Signup::on_register_btn_clicked()
{

    ui->error->setText("");
    ui->error->setVisible(false);

    if (ui->first_name_le->text().isEmpty()) {
        show_error_message("Please fill first name field!");
        return;
    } else if (ui->last_name_le->text().isEmpty()){
        show_error_message("Please fill last name field!");
        return;
    } else if (!ui->email_le->text().endsWith("@gmail.com")){
        show_error_message("Please enter a valid email!");
        return;
    }

    QString username = ui->username_le->text();
    QString email = ui->email_le->text();
    QString message = "Check Registration " + username + " " + email;
    emit send_message(message);
}
