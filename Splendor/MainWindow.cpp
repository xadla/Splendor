#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->homescreen_bg_lb->hide();
    ui->name_lb->hide();
    ui->name_le->hide();
    ui->signin_bt->hide();
    ui->signup_bt->hide();

    connect(this, &MainWindow::showHomeScreen, this, &MainWindow::HomeScreen);

    LoadingProcess();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete timerForLoading;
}

void MainWindow::LoadingProcess()
{
    timerForLoading = new QTimer();
    connect(timerForLoading, &QTimer::timeout, this, &MainWindow::UpdateLoadingPB);
    timerForLoading->start(500);
}

void MainWindow::UpdateLoadingPB()
{
    int currentTime = ui->loading_pb->value();
    if (currentTime < 100) {
        ui->loading_pb->setValue(currentTime + 10);
    } else {
        timerForLoading->stop();
        emit showHomeScreen();
    }
}

void MainWindow::HomeScreen()
{
    ui->homescreen_bg_lb->show();
    ui->name_lb->show();
    ui->name_le->show();
    ui->signin_bt->show();
    ui->signup_bt->show();
}
