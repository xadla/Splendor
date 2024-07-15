#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    Ui::MainWindow *ui;

private:
    void LoadingProcess();
    void UpdateLoadingPB();
    QTimer *timerForLoading;

    void HomeScreen();

signals:
    void showHomeScreen();

};
#endif // MAINWINDOW_H
