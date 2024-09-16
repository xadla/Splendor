#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include <QList>
#include <QLabel>
#include <QByteArray>
#include <QCryptographicHash>

namespace Ui {
class Signup;
}

class Signup : public QWidget
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();
    void show_error_message(const QString& error);
    void register_account();

private slots:
    void on_pushButton_clicked();
    void on_register_btn_clicked();

signals:
    void back_to_home(const QString& situation);
    void send_message(const QString& message);

private:
    Ui::Signup *ui;
    QList<QLabel *> error_list;

};

#endif // SIGNUP_H
