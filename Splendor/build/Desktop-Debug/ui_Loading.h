/********************************************************************************
** Form generated from reading UI file 'Loading.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loading
{
public:
    QLabel *loding_bg_lb;
    QProgressBar *loading_pb;

    void setupUi(QWidget *Loading)
    {
        if (Loading->objectName().isEmpty())
            Loading->setObjectName("Loading");
        Loading->resize(554, 272);
        loding_bg_lb = new QLabel(Loading);
        loding_bg_lb->setObjectName("loding_bg_lb");
        loding_bg_lb->setEnabled(true);
        loding_bg_lb->setGeometry(QRect(0, 0, 554, 272));
        loding_bg_lb->setCursor(QCursor(Qt::ArrowCursor));
        loding_bg_lb->setStyleSheet(QString::fromUtf8("border-image:url(:/images/loading2.png)"));
        loading_pb = new QProgressBar(Loading);
        loading_pb->setObjectName("loading_pb");
        loading_pb->setGeometry(QRect(2, 230, 550, 41));
        QPalette palette;
        QBrush brush(QColor(0, 126, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 100, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(0, 69, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        loading_pb->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Mandali")});
        font.setPointSize(14);
        font.setItalic(false);
        loading_pb->setFont(font);
        loading_pb->setCursor(QCursor(Qt::WaitCursor));
        loading_pb->setValue(0);
        loading_pb->setTextVisible(true);

        retranslateUi(Loading);

        QMetaObject::connectSlotsByName(Loading);
    } // setupUi

    void retranslateUi(QWidget *Loading)
    {
        Loading->setWindowTitle(QCoreApplication::translate("Loading", "Splendor", nullptr));
        loding_bg_lb->setText(QString());
        loading_pb->setFormat(QCoreApplication::translate("Loading", "LOADING...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loading: public Ui_Loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
