#ifndef LOADING_H
#define LOADING_H

#include <QWidget>
#include <QTimer>

#include "Client.h"

namespace Ui {
class Loading;
}

class Loading : public QWidget
{
    Q_OBJECT

public:
    explicit Loading(Client* client, QWidget *parent = nullptr);
    ~Loading();
    void client_connected();

private:
    Ui::Loading *ui;
    void UpdateLoadingPB();
    QTimer *timerForLoading;
    Client* _client;

signals:
    void showHomeScreen();

private slots:
    void on_retry_btn_clicked();
};

#endif // LOADING_H
