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

    // hide buttons
    ui->logout_btn->setVisible(false);
    ui->disconnect_btn->setVisible(false);

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

    // game connections
    connect(client, &Client::host_create_successfull, this, &MainWindow::show_hosting);
    connect(client, &Client::give_message, this, &MainWindow::message_from_player);
    connect(client, &Client::join_player, this, &MainWindow::join_player);
    connect(client, &Client::new_host_created, this, &MainWindow::add_host);
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
        _username = situation;
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
        _username = situation;
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

void MainWindow::on_create_game_btn_clicked()
{
    if (_username.isEmpty()) {
        qDebug() << "first login and create after!";
        return;
    }

    client->send_message("Create Host");
}

void MainWindow::show_hosting()
{
    ui->create_game_btn->setVisible(false);
    ui->disconnect_btn->setVisible(true);
    ui->message_le->setEnabled(true);
    ui->messages_list->addItem("Host Created");
}

void MainWindow::on_send_button_clicked()
{
    QString text = ui->message_le->text();
    if (!text.isEmpty()) {
        ui->message_le->setText("");
        text = _username + ":" + text;
        ui->messages_list->addItem(text);
        client->send_message("Message All " + text);

    } else {
        qDebug() << "Enter a message first";
    }
}

void MainWindow::message_from_player(const QString &mes)
{
    ui->messages_list->addItem(mes);
}

void MainWindow::join_player()
{
    ui->message_le->setEnabled(true);
    qDebug() << "Player joined the game";
}

void MainWindow::add_host(const QString &name)
{
    ui->hosts->addItem(name);
}

void MainWindow::on_pushButton_clicked()
{
    client->send_message("Refresh");
}

void MainWindow::on_hosts_itemClicked(QListWidgetItem *item)
{
    client->send_message("Join " + item->text());
}
