#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMap>
#include <QVector>

#include "Loading.h"
#include "ShowMessage.h"
#include "Game.h"
#include "Signup.h"
#include "Client.h"

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

    Loading loadingPage;
    ShowMessage message;
    Game game;
    Signup signup;
    Client *client;

signals:
    void showHomeScreen();

private slots:
    void on_start_btn_clicked();
    void on_signup_bt_clicked();
    void signup_back();
    void send_message(const QString& message);
};
#endif // MAINWINDOW_H
