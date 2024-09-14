#include "ShowMessage.h"

ShowMessage::ShowMessage()
{
    setStyleSheet("background-color: gray;");
}

void ShowMessage::start(QString title, QString message)
{

    setWindowTitle(title);
    setText(message);
    setIcon(QMessageBox::Information);

    setStandardButtons(QMessageBox::Ok);

    this->exec();
}
