#ifndef LOADING_H
#define LOADING_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Loading;
}

class Loading : public QWidget
{
    Q_OBJECT

public:
    explicit Loading(QWidget *parent = nullptr);
    ~Loading();

private:
    Ui::Loading *ui;
    void UpdateLoadingPB();
    QTimer *timerForLoading;

signals:
    void showHomeScreen();

};

#endif // LOADING_H
