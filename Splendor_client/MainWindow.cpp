#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    client = new Client(this);
    loadingPage = new Loading(client);

    connect(client, &Client::connected, loadingPage, &Loading::client_connected);

    ui->setupUi(this);
    setFixedSize(1366, 768);
    QTimer::singleShot(0, this, &MainWindow::showLoading);

    // hide logout button
    ui->logout_btn->setVisible(false);

    connect(loadingPage, &Loading::showHomeScreen, this, &MainWindow::HomeScreen);

    // same button in signup and signin
    connect(&signup, &Signup::back_to_home, this, &MainWindow::signup_back);
    connect(&login, &Login::back_to_main, this, &MainWindow::login_back);
    connect(&signup, &Signup::send_message, this, &MainWindow::send_message);
    connect(&login, &Login::send_message, this, &MainWindow::send_message);

    // register connections
    connect(client, &Client::username_error_register, &signup, &Signup::show_error_message);
    connect(client, &Client::email_error_register, &signup, &Signup::show_error_message);
    connect(client, &Client::ckeck_passed_register, &signup, &Signup::register_account);

    // login connections
    connect(client, &Client::login_successfull, &login, &Login::login_success);
    connect(client, &Client::password_wrong_login, &login, &Login::password_wrong);
    connect(client, &Client::user_not_found_login, &login, &Login::username_not_found);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete client;
}

void MainWindow::showLoading()
{
    this->hide();
    loadingPage->show();
}

void MainWindow::HomeScreen()
{
    loadingPage->hide();
    this->show();
}

void MainWindow::on_start_btn_clicked()
{

    if (ui->name_le->text().isEmpty()) {
        message.start("Name", "Please enter name first!");
    } else if (ui->bot_level->currentIndex() == 0
             && ui->bot_level_2->currentIndex() == 0
             && ui->bot_level_3->currentIndex() == 0) {
        message.start("Level", "Please enter level for bots!");
    } else {
        QMap<int, int> bots;

        if (ui->bot_level->currentIndex() > 0) {
            bots[1] = ui->bot_level->currentIndex();
        }
        if (ui->bot_level_2->currentIndex() > 0) {
            bots[2] = ui->bot_level_2->currentIndex();
        }
        if (ui->bot_level_3->currentIndex() > 0) {
            bots[3] = ui->bot_level_3->currentIndex();
        }

        Player player(ui->name_le->text());

        QVector<Player> players;
        players.append(player);

        this->hide();
        game.start(bots, players);

    }

}

void MainWindow::on_signup_bt_clicked()
{
    this->hide();
    this->signup.show();
}

void MainWindow::signup_back(const QString &situation)
{
    if (!situation.isEmpty()){
        ui->signin_bt->setVisible(false);
        ui->signup_bt->setVisible(false);
        ui->logout_btn->setVisible(true);
        ui->name_le->setText(situation);
        ui->name_le->setDisabled(true);
    }

    signup.hide();
    this->show();

}

void MainWindow::login_back(const QString &situation)
{
    if (!situation.isEmpty()){
        ui->signin_bt->setVisible(false);
        ui->signup_bt->setVisible(false);
        ui->logout_btn->setVisible(true);
        ui->name_le->setText(situation);
        ui->name_le->setDisabled(true);
    }

    login.hide();
    this->show();
}

void MainWindow::send_message(const QString& message)
{
    client->send_message(message);
}

void MainWindow::on_signin_bt_clicked()
{
    this->hide();
    login.show();
}


void MainWindow::on_logout_btn_clicked()
{
    ui->logout_btn->setVisible(false);
    ui->signin_bt->setVisible(true);
    ui->signup_bt->setVisible(true);
    ui->name_le->setDisabled(false);
}
