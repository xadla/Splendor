#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(1366, 768);

    connect(&loadingPage, &Loading::showHomeScreen, this, &MainWindow::HomeScreen);

    QTimer::singleShot(0, this, &MainWindow::showLoading);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showLoading()
{
    this->hide();
    loadingPage.show();
}

void MainWindow::HomeScreen()
{
    loadingPage.hide();
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
