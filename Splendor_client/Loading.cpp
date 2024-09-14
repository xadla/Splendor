#include "Loading.h"
#include "ui_Loading.h"

Loading::Loading(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Loading)
{
    ui->setupUi(this);

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
    int currentTime = ui->loading_pb->value();
    if (currentTime < 100) {
        ui->loading_pb->setValue(currentTime + 10);
    } else {
        timerForLoading->stop();
        emit showHomeScreen();
    }
}
