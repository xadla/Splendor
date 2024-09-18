#include "Loading.h"
#include "ui_Loading.h"

Loading::Loading(Client* client, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Loading)
{

    _client = client;

    ui->setupUi(this);
    ui->error_lbl->setVisible(false);
    ui->retry_btn->setVisible(false);

    setFixedSize(554, 272);

    timerForLoading = new QTimer();
    connect(timerForLoading, &QTimer::timeout, this, &Loading::UpdateLoadingPB);
    timerForLoading->start(500);
}

Loading::~Loading()
{
    delete ui;
    delete timerForLoading;
}

void Loading::UpdateLoadingPB()
{
    _client->connect_to_host(QHostAddress::Any, 8080);

    int currentTime = ui->loading_pb->value();
    if (currentTime < 100) {
        ui->loading_pb->setValue(currentTime + 10);
    } else {
        timerForLoading->stop();
        ui->error_lbl->setText("Cannot connect to the server!");
        ui->error_lbl->setVisible(true);
        ui->retry_btn->setVisible(true);
        qDebug() << "not connected";
    }
}

void Loading::client_connected(){
    timerForLoading->stop();
    emit showHomeScreen();
}

void Loading::on_retry_btn_clicked()
{
    ui->loading_pb->setValue(0);
    timerForLoading->start(500);
    ui->error_lbl->setVisible(false);
    ui->retry_btn->setVisible(false);
}

