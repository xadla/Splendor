/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *homescreen_bg_lb;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *signLayout;
    QPushButton *signin_bt;
    QPushButton *signup_bt;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *startLayout;
    QListView *historyList;
    QComboBox *bot_level;
    QComboBox *bot_level_2;
    QComboBox *bot_level_3;
    QPushButton *start_btn;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *nameLayout;
    QLabel *name_lb;
    QLineEdit *name_le;
    QListView *serverList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1366, 768);
        QPalette palette;
        QBrush brush(QColor(255, 77, 214, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        MainWindow->setPalette(palette);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        homescreen_bg_lb = new QLabel(centralwidget);
        homescreen_bg_lb->setObjectName("homescreen_bg_lb");
        homescreen_bg_lb->setGeometry(QRect(0, 0, 1366, 768));
        homescreen_bg_lb->setStyleSheet(QString::fromUtf8("border-image:url(:/images/homeScreen.png)"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(1180, 10, 178, 112));
        signLayout = new QVBoxLayout(verticalLayoutWidget);
        signLayout->setObjectName("signLayout");
        signLayout->setContentsMargins(0, 0, 0, 0);
        signin_bt = new QPushButton(verticalLayoutWidget);
        signin_bt->setObjectName("signin_bt");
        QPalette palette1;
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush3(QColor(0, 43, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        signin_bt->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Mandali")});
        font.setPointSize(15);
        font.setItalic(true);
        signin_bt->setFont(font);
        signin_bt->setCursor(QCursor(Qt::PointingHandCursor));
        signin_bt->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"padding: 6px;\n"
""));

        signLayout->addWidget(signin_bt);

        signup_bt = new QPushButton(verticalLayoutWidget);
        signup_bt->setObjectName("signup_bt");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        signup_bt->setPalette(palette2);
        signup_bt->setFont(font);
        signup_bt->setCursor(QCursor(Qt::PointingHandCursor));
        signup_bt->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"padding: 6px;\n"
""));

        signLayout->addWidget(signup_bt);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(1070, 140, 291, 571));
        startLayout = new QVBoxLayout(verticalLayoutWidget_2);
        startLayout->setObjectName("startLayout");
        startLayout->setContentsMargins(0, 0, 0, 0);
        historyList = new QListView(verticalLayoutWidget_2);
        historyList->setObjectName("historyList");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Mandali")});
        font1.setPointSize(14);
        font1.setItalic(true);
        historyList->setFont(font1);
        historyList->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));

        startLayout->addWidget(historyList);

        bot_level = new QComboBox(verticalLayoutWidget_2);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-information")));
        bot_level->addItem(icon, QString());
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("face-smile")));
        bot_level->addItem(icon1, QString());
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("face-smirk")));
        bot_level->addItem(icon2, QString());
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("face-sick")));
        bot_level->addItem(icon3, QString());
        bot_level->setObjectName("bot_level");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush5(QColor(127, 127, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(170, 170, 170, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush8(QColor(0, 0, 0, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush9(QColor(127, 127, 127, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        bot_level->setPalette(palette3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MesloLGS NF")});
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(true);
        bot_level->setFont(font2);
        bot_level->setCursor(QCursor(Qt::PointingHandCursor));
        bot_level->setStyleSheet(QString::fromUtf8("subcontrol-origin: padding;  \n"
"subcontrol-position: right;  \n"
"width: 15px;  \n"
"border-left-width: 1px;  \n"
"border-left-color: #ccc;  \n"
"border-left-style: solid; "));

        startLayout->addWidget(bot_level);

        bot_level_2 = new QComboBox(verticalLayoutWidget_2);
        bot_level_2->addItem(icon, QString());
        bot_level_2->addItem(icon1, QString());
        bot_level_2->addItem(icon2, QString());
        bot_level_2->addItem(icon3, QString());
        bot_level_2->setObjectName("bot_level_2");
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        bot_level_2->setPalette(palette4);
        bot_level_2->setFont(font2);
        bot_level_2->setCursor(QCursor(Qt::PointingHandCursor));
        bot_level_2->setStyleSheet(QString::fromUtf8("subcontrol-origin: padding;  \n"
"subcontrol-position: right;  \n"
"width: 15px;  \n"
"border-left-width: 1px;  \n"
"border-left-color: #ccc;  \n"
"border-left-style: solid; "));

        startLayout->addWidget(bot_level_2);

        bot_level_3 = new QComboBox(verticalLayoutWidget_2);
        bot_level_3->addItem(icon, QString());
        bot_level_3->addItem(icon1, QString());
        bot_level_3->addItem(icon2, QString());
        bot_level_3->addItem(icon3, QString());
        bot_level_3->setObjectName("bot_level_3");
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        bot_level_3->setPalette(palette5);
        bot_level_3->setFont(font2);
        bot_level_3->setCursor(QCursor(Qt::PointingHandCursor));
        bot_level_3->setStyleSheet(QString::fromUtf8("subcontrol-origin: padding;  \n"
"subcontrol-position: right;  \n"
"width: 15px;  \n"
"border-left-width: 1px;  \n"
"border-left-color: #ccc;  \n"
"border-left-style: solid; "));

        startLayout->addWidget(bot_level_3);

        start_btn = new QPushButton(verticalLayoutWidget_2);
        start_btn->setObjectName("start_btn");
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        start_btn->setPalette(palette6);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Samanata")});
        font3.setPointSize(15);
        font3.setItalic(false);
        start_btn->setFont(font3);
        start_btn->setCursor(QCursor(Qt::PointingHandCursor));
        start_btn->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
"padding: 6px;"));

        startLayout->addWidget(start_btn);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 1131, 71));
        nameLayout = new QHBoxLayout(horizontalLayoutWidget);
        nameLayout->setObjectName("nameLayout");
        nameLayout->setContentsMargins(0, 0, 0, 0);
        name_lb = new QLabel(horizontalLayoutWidget);
        name_lb->setObjectName("name_lb");
        QPalette palette7;
        QBrush brush10(QColor(248, 228, 92, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush10);
        name_lb->setPalette(palette7);
        name_lb->setFont(font);

        nameLayout->addWidget(name_lb);

        name_le = new QLineEdit(horizontalLayoutWidget);
        name_le->setObjectName("name_le");
        name_le->setFont(font);
        name_le->setMaxLength(20);
        name_le->setClearButtonEnabled(false);

        nameLayout->addWidget(name_le);

        serverList = new QListView(centralwidget);
        serverList->setObjectName("serverList");
        serverList->setGeometry(QRect(30, 100, 1031, 611));
        serverList->setStyleSheet(QString::fromUtf8("border-image: url(:/images/homeScreen.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1366, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Splendor", nullptr));
        homescreen_bg_lb->setText(QString());
        signin_bt->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        signup_bt->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        bot_level->setItemText(0, QCoreApplication::translate("MainWindow", "open", nullptr));
        bot_level->setItemText(1, QCoreApplication::translate("MainWindow", "easy", nullptr));
        bot_level->setItemText(2, QCoreApplication::translate("MainWindow", "normal", nullptr));
        bot_level->setItemText(3, QCoreApplication::translate("MainWindow", "insane", nullptr));

        bot_level_2->setItemText(0, QCoreApplication::translate("MainWindow", "open", nullptr));
        bot_level_2->setItemText(1, QCoreApplication::translate("MainWindow", "easy", nullptr));
        bot_level_2->setItemText(2, QCoreApplication::translate("MainWindow", "normal", nullptr));
        bot_level_2->setItemText(3, QCoreApplication::translate("MainWindow", "insane", nullptr));

        bot_level_3->setItemText(0, QCoreApplication::translate("MainWindow", "open", nullptr));
        bot_level_3->setItemText(1, QCoreApplication::translate("MainWindow", "easy", nullptr));
        bot_level_3->setItemText(2, QCoreApplication::translate("MainWindow", "normal", nullptr));
        bot_level_3->setItemText(3, QCoreApplication::translate("MainWindow", "insane", nullptr));

        start_btn->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        name_lb->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        name_le->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
