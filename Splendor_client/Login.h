#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    void login_success();
    void password_wrong();
    void username_not_found();

signals:
    void back_to_main(const QString& situation);
    void send_message(const QString& mes);

private slots:
    void on_back_btn_clicked();

    void on_login_btn_clicked();

    void show_error_message(const QString& mes);

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
