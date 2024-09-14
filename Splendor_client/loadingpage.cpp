#include "loadingpage.h"

LoadingPage::LoadingPage()
{
    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &LoadingPage::updateProgress);
    timer->start(1000);
}

void LoadingPage::updateProgress()
{
    int currentValue = ui->loding_pb->value();
    if (currentValue <= 100) {
        ui->loading_pb->setValue(currentValue + 10);
    } else {
        timer->stop();
    }
}
