#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
