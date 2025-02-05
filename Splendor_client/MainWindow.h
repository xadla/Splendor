#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMap>
#include <QVector>
#include <QListWidgetItem>
#include <QComboBox>

#include "Loading.h"
#include "ShowMessage.h"
#include "Game.h"
#include "Signup.h"
#include "Client.h"
#include "Login.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    Ui::MainWindow *ui;

private:

    void showLoading();

    void HomeScreen();

    Loading* loadingPage;
    ShowMessage message;
    Game game;
    Signup signup;
    Login login;
    Client *client;

    QString _username;

    QList<QComboBox *> bot_levels;

signals:
    void showHomeScreen();

private slots:
    void on_start_btn_clicked();
    void on_signup_bt_clicked();
    void signup_back(const QString &situation);
    void login_back(const QString &situation);
    void send_message(const QString& message);
    void on_signin_bt_clicked();

    void on_logout_btn_clicked();
    void on_create_game_btn_clicked();

    void show_hosting();
    void on_send_button_clicked();
    void message_from_player(const QString& mes);
    void join_player();
    void add_host(const QString &name);
    void on_pushButton_clicked();
    void on_hosts_itemClicked(QListWidgetItem *item);

    void player_joined(const QString& playerName);
    void on_disconnect_btn_clicked();
    void on_delete_host_btn_clicked();
    void delete_host_name(const QString& hostName);
};
#endif // MAINWINDOW_H
