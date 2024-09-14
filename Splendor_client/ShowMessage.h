#ifndef SHOWMESSAGE_H
#define SHOWMESSAGE_H

#include <QMessageBox>
#include <QObject>
#include <QString>

class ShowMessage : public QMessageBox
{
public:
    ShowMessage();
    void start(QString title, QString message);
};

#endif // SHOWMESSAGE_H
