#ifndef LOADINGPAGE_H
#define LOADINGPAGE_H

#include <QObject>
#include <QTimer>

#include "MainWindow.h"

class LoadingPage : public MainWindow
{
    Q_OBJECT
public:
    LoadingPage();

private:
    QTimer *timer;

private slots:
    void updateProgress();
};

#endif // LOADINGPAGE_H
