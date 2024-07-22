/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QLabel *background_color;
    QPushButton *greenTokenBTN;
    QPushButton *redTokenBTN;
    QPushButton *blueTokenBTN;
    QPushButton *blackTokenBTN;
    QPushButton *jokenTokenBTN;
    QPushButton *whiteTokenBTN;
    QLabel *numberJokerLBL;
    QLabel *numberBlueLBL;
    QLabel *numberRedLBL;
    QLabel *numberWhiteLBL;
    QLabel *numberBlackLBL;
    QLabel *numberGreenLBL;
    QPushButton *cardOne1;
    QPushButton *cardOne2;
    QPushButton *cardOne3;
    QPushButton *cardOne4;
    QLabel *valueOne1;
    QLabel *valueOne2;
    QLabel *valueOne3;
    QLabel *valueOne4;
    QLabel *scoreOne1;
    QLabel *scoreOne3;
    QLabel *scoreOne2;
    QLabel *scoreOne4;
    QPushButton *cardTwo1;
    QPushButton *cardTwo4;
    QPushButton *cardTwo3;
    QPushButton *cardTwo2;
    QLabel *valueTwo1;
    QLabel *valueTwo2;
    QLabel *valueTwo4;
    QLabel *valueTwo3;
    QLabel *scoreTwo1;
    QLabel *scoreTwo4;
    QLabel *scoreTwo3;
    QLabel *scoreTwo2;
    QPushButton *cardThree1;
    QPushButton *cardThree2;
    QPushButton *cardThree3;
    QPushButton *cardThree4;
    QLabel *valueThree1;
    QLabel *valueThree2;
    QLabel *valueThree3;
    QLabel *valueThree4;
    QLabel *scoreThree1;
    QLabel *scoreThree2;
    QLabel *scoreThree3;
    QLabel *scoreThree4;
    QLabel *tokenRecive1;
    QLabel *tokenRecive2;
    QLabel *tokenRecive3;
    QPushButton *reserveBTN;
    QPushButton *buyButton;
    QLabel *cardChoosed;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(1366, 768);
        background_color = new QLabel(Game);
        background_color->setObjectName("background_color");
        background_color->setGeometry(QRect(0, 0, 1366, 768));
        background_color->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 171, 143);"));
        greenTokenBTN = new QPushButton(Game);
        greenTokenBTN->setObjectName("greenTokenBTN");
        greenTokenBTN->setGeometry(QRect(410, 10, 71, 71));
        greenTokenBTN->setCursor(QCursor(Qt::PointingHandCursor));
        greenTokenBTN->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/greenToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        redTokenBTN = new QPushButton(Game);
        redTokenBTN->setObjectName("redTokenBTN");
        redTokenBTN->setGeometry(QRect(170, 10, 71, 71));
        redTokenBTN->setCursor(QCursor(Qt::PointingHandCursor));
        redTokenBTN->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/redToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        blueTokenBTN = new QPushButton(Game);
        blueTokenBTN->setObjectName("blueTokenBTN");
        blueTokenBTN->setGeometry(QRect(250, 10, 71, 71));
        blueTokenBTN->setCursor(QCursor(Qt::PointingHandCursor));
        blueTokenBTN->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/blueToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        blackTokenBTN = new QPushButton(Game);
        blackTokenBTN->setObjectName("blackTokenBTN");
        blackTokenBTN->setGeometry(QRect(330, 10, 71, 71));
        blackTokenBTN->setCursor(QCursor(Qt::PointingHandCursor));
        blackTokenBTN->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/blackToken.jpeg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        jokenTokenBTN = new QPushButton(Game);
        jokenTokenBTN->setObjectName("jokenTokenBTN");
        jokenTokenBTN->setGeometry(QRect(10, 10, 71, 71));
        jokenTokenBTN->setCursor(QCursor(Qt::PointingHandCursor));
        jokenTokenBTN->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/jokerToken.png);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        whiteTokenBTN = new QPushButton(Game);
        whiteTokenBTN->setObjectName("whiteTokenBTN");
        whiteTokenBTN->setGeometry(QRect(90, 10, 71, 71));
        whiteTokenBTN->setCursor(QCursor(Qt::PointingHandCursor));
        whiteTokenBTN->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        numberJokerLBL = new QLabel(Game);
        numberJokerLBL->setObjectName("numberJokerLBL");
        numberJokerLBL->setGeometry(QRect(33, 80, 21, 31));
        numberBlueLBL = new QLabel(Game);
        numberBlueLBL->setObjectName("numberBlueLBL");
        numberBlueLBL->setGeometry(QRect(275, 80, 21, 31));
        numberRedLBL = new QLabel(Game);
        numberRedLBL->setObjectName("numberRedLBL");
        numberRedLBL->setGeometry(QRect(197, 80, 21, 31));
        numberWhiteLBL = new QLabel(Game);
        numberWhiteLBL->setObjectName("numberWhiteLBL");
        numberWhiteLBL->setGeometry(QRect(116, 80, 21, 31));
        numberBlackLBL = new QLabel(Game);
        numberBlackLBL->setObjectName("numberBlackLBL");
        numberBlackLBL->setGeometry(QRect(355, 80, 21, 31));
        numberGreenLBL = new QLabel(Game);
        numberGreenLBL->setObjectName("numberGreenLBL");
        numberGreenLBL->setGeometry(QRect(440, 80, 21, 31));
        cardOne1 = new QPushButton(Game);
        cardOne1->setObjectName("cardOne1");
        cardOne1->setGeometry(QRect(10, 120, 141, 181));
        QPalette palette;
        QBrush brush(QColor(85, 215, 49, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        cardOne1->setPalette(palette);
        cardOne1->setCursor(QCursor(Qt::PointingHandCursor));
        cardOne1->setStyleSheet(QString::fromUtf8("border: 2px solid green;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(85, 215, 49);"));
        cardOne2 = new QPushButton(Game);
        cardOne2->setObjectName("cardOne2");
        cardOne2->setGeometry(QRect(160, 120, 141, 181));
        cardOne2->setCursor(QCursor(Qt::PointingHandCursor));
        cardOne2->setStyleSheet(QString::fromUtf8("border: 2px solid green;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(85, 215, 49);"));
        cardOne3 = new QPushButton(Game);
        cardOne3->setObjectName("cardOne3");
        cardOne3->setGeometry(QRect(310, 120, 141, 181));
        cardOne3->setCursor(QCursor(Qt::PointingHandCursor));
        cardOne3->setStyleSheet(QString::fromUtf8("border: 2px solid green;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(85, 215, 49);"));
        cardOne4 = new QPushButton(Game);
        cardOne4->setObjectName("cardOne4");
        cardOne4->setGeometry(QRect(460, 120, 141, 181));
        cardOne4->setCursor(QCursor(Qt::PointingHandCursor));
        cardOne4->setStyleSheet(QString::fromUtf8("border: 2px solid green;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(85, 215, 49);"));
        valueOne1 = new QLabel(Game);
        valueOne1->setObjectName("valueOne1");
        valueOne1->setGeometry(QRect(83, 120, 67, 51));
        valueOne1->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueOne2 = new QLabel(Game);
        valueOne2->setObjectName("valueOne2");
        valueOne2->setGeometry(QRect(233, 120, 67, 51));
        valueOne2->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueOne3 = new QLabel(Game);
        valueOne3->setObjectName("valueOne3");
        valueOne3->setGeometry(QRect(383, 120, 67, 51));
        valueOne3->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueOne4 = new QLabel(Game);
        valueOne4->setObjectName("valueOne4");
        valueOne4->setGeometry(QRect(533, 120, 67, 51));
        valueOne4->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        scoreOne1 = new QLabel(Game);
        scoreOne1->setObjectName("scoreOne1");
        scoreOne1->setGeometry(QRect(20, 130, 16, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Serif CJK HK")});
        font.setPointSize(17);
        font.setBold(true);
        scoreOne1->setFont(font);
        scoreOne3 = new QLabel(Game);
        scoreOne3->setObjectName("scoreOne3");
        scoreOne3->setGeometry(QRect(320, 130, 16, 41));
        scoreOne3->setFont(font);
        scoreOne2 = new QLabel(Game);
        scoreOne2->setObjectName("scoreOne2");
        scoreOne2->setGeometry(QRect(170, 130, 16, 41));
        scoreOne2->setFont(font);
        scoreOne4 = new QLabel(Game);
        scoreOne4->setObjectName("scoreOne4");
        scoreOne4->setGeometry(QRect(470, 130, 16, 41));
        scoreOne4->setFont(font);
        cardTwo1 = new QPushButton(Game);
        cardTwo1->setObjectName("cardTwo1");
        cardTwo1->setGeometry(QRect(10, 310, 141, 181));
        QPalette palette1;
        QBrush brush1(QColor(208, 203, 70, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        cardTwo1->setPalette(palette1);
        cardTwo1->setCursor(QCursor(Qt::PointingHandCursor));
        cardTwo1->setStyleSheet(QString::fromUtf8("border: 2px solid yellow;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(208, 203, 70);"));
        cardTwo4 = new QPushButton(Game);
        cardTwo4->setObjectName("cardTwo4");
        cardTwo4->setGeometry(QRect(460, 310, 141, 181));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        cardTwo4->setPalette(palette2);
        cardTwo4->setCursor(QCursor(Qt::PointingHandCursor));
        cardTwo4->setStyleSheet(QString::fromUtf8("border: 2px solid yellow;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(208, 203, 70);"));
        cardTwo3 = new QPushButton(Game);
        cardTwo3->setObjectName("cardTwo3");
        cardTwo3->setGeometry(QRect(310, 310, 141, 181));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        cardTwo3->setPalette(palette3);
        cardTwo3->setCursor(QCursor(Qt::PointingHandCursor));
        cardTwo3->setStyleSheet(QString::fromUtf8("border: 2px solid yellow;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(208, 203, 70);"));
        cardTwo2 = new QPushButton(Game);
        cardTwo2->setObjectName("cardTwo2");
        cardTwo2->setGeometry(QRect(160, 310, 141, 181));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        cardTwo2->setPalette(palette4);
        cardTwo2->setCursor(QCursor(Qt::PointingHandCursor));
        cardTwo2->setStyleSheet(QString::fromUtf8("border: 2px solid yellow;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(208, 203, 70);"));
        valueTwo1 = new QLabel(Game);
        valueTwo1->setObjectName("valueTwo1");
        valueTwo1->setGeometry(QRect(83, 310, 67, 51));
        valueTwo1->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueTwo2 = new QLabel(Game);
        valueTwo2->setObjectName("valueTwo2");
        valueTwo2->setGeometry(QRect(233, 310, 67, 51));
        valueTwo2->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueTwo4 = new QLabel(Game);
        valueTwo4->setObjectName("valueTwo4");
        valueTwo4->setGeometry(QRect(533, 310, 67, 51));
        valueTwo4->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueTwo3 = new QLabel(Game);
        valueTwo3->setObjectName("valueTwo3");
        valueTwo3->setGeometry(QRect(383, 310, 67, 51));
        valueTwo3->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        scoreTwo1 = new QLabel(Game);
        scoreTwo1->setObjectName("scoreTwo1");
        scoreTwo1->setGeometry(QRect(20, 320, 16, 41));
        scoreTwo1->setFont(font);
        scoreTwo4 = new QLabel(Game);
        scoreTwo4->setObjectName("scoreTwo4");
        scoreTwo4->setGeometry(QRect(470, 320, 16, 41));
        scoreTwo4->setFont(font);
        scoreTwo3 = new QLabel(Game);
        scoreTwo3->setObjectName("scoreTwo3");
        scoreTwo3->setGeometry(QRect(320, 320, 16, 41));
        scoreTwo3->setFont(font);
        scoreTwo2 = new QLabel(Game);
        scoreTwo2->setObjectName("scoreTwo2");
        scoreTwo2->setGeometry(QRect(170, 320, 16, 41));
        scoreTwo2->setFont(font);
        cardThree1 = new QPushButton(Game);
        cardThree1->setObjectName("cardThree1");
        cardThree1->setGeometry(QRect(10, 500, 141, 181));
        QPalette palette5;
        QBrush brush2(QColor(59, 140, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        cardThree1->setPalette(palette5);
        cardThree1->setCursor(QCursor(Qt::PointingHandCursor));
        cardThree1->setStyleSheet(QString::fromUtf8("border: 2px solid blue;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(59, 140, 191);"));
        cardThree2 = new QPushButton(Game);
        cardThree2->setObjectName("cardThree2");
        cardThree2->setGeometry(QRect(160, 500, 141, 181));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        cardThree2->setPalette(palette6);
        cardThree2->setCursor(QCursor(Qt::PointingHandCursor));
        cardThree2->setStyleSheet(QString::fromUtf8("border: 2px solid blue;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(59, 140, 191);"));
        cardThree3 = new QPushButton(Game);
        cardThree3->setObjectName("cardThree3");
        cardThree3->setGeometry(QRect(310, 500, 141, 181));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        cardThree3->setPalette(palette7);
        cardThree3->setCursor(QCursor(Qt::PointingHandCursor));
        cardThree3->setStyleSheet(QString::fromUtf8("border: 2px solid blue;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(59, 140, 191);"));
        cardThree4 = new QPushButton(Game);
        cardThree4->setObjectName("cardThree4");
        cardThree4->setGeometry(QRect(460, 500, 141, 181));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        cardThree4->setPalette(palette8);
        cardThree4->setCursor(QCursor(Qt::PointingHandCursor));
        cardThree4->setStyleSheet(QString::fromUtf8("border: 2px solid blue;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;\n"
"background-color: rgb(59, 140, 191);"));
        valueThree1 = new QLabel(Game);
        valueThree1->setObjectName("valueThree1");
        valueThree1->setGeometry(QRect(83, 500, 67, 51));
        valueThree1->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueThree2 = new QLabel(Game);
        valueThree2->setObjectName("valueThree2");
        valueThree2->setGeometry(QRect(233, 500, 67, 51));
        valueThree2->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueThree3 = new QLabel(Game);
        valueThree3->setObjectName("valueThree3");
        valueThree3->setGeometry(QRect(383, 500, 67, 51));
        valueThree3->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        valueThree4 = new QLabel(Game);
        valueThree4->setObjectName("valueThree4");
        valueThree4->setGeometry(QRect(533, 500, 67, 51));
        valueThree4->setStyleSheet(QString::fromUtf8("color: #333;\n"
"border-image: url(:/images/whiteToken.jpg);\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        scoreThree1 = new QLabel(Game);
        scoreThree1->setObjectName("scoreThree1");
        scoreThree1->setGeometry(QRect(20, 510, 16, 41));
        scoreThree1->setFont(font);
        scoreThree2 = new QLabel(Game);
        scoreThree2->setObjectName("scoreThree2");
        scoreThree2->setGeometry(QRect(170, 510, 16, 41));
        scoreThree2->setFont(font);
        scoreThree3 = new QLabel(Game);
        scoreThree3->setObjectName("scoreThree3");
        scoreThree3->setGeometry(QRect(320, 510, 16, 41));
        scoreThree3->setFont(font);
        scoreThree4 = new QLabel(Game);
        scoreThree4->setObjectName("scoreThree4");
        scoreThree4->setGeometry(QRect(470, 510, 16, 41));
        scoreThree4->setFont(font);
        tokenRecive1 = new QLabel(Game);
        tokenRecive1->setObjectName("tokenRecive1");
        tokenRecive1->setGeometry(QRect(490, 10, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sahadeva")});
        font1.setPointSize(14);
        font1.setItalic(true);
        tokenRecive1->setFont(font1);
        tokenRecive2 = new QLabel(Game);
        tokenRecive2->setObjectName("tokenRecive2");
        tokenRecive2->setGeometry(QRect(490, 40, 101, 31));
        tokenRecive2->setFont(font1);
        tokenRecive3 = new QLabel(Game);
        tokenRecive3->setObjectName("tokenRecive3");
        tokenRecive3->setGeometry(QRect(490, 70, 101, 31));
        tokenRecive3->setFont(font1);
        reserveBTN = new QPushButton(Game);
        reserveBTN->setObjectName("reserveBTN");
        reserveBTN->setGeometry(QRect(330, 710, 101, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("TenaliRamakrishna")});
        font2.setPointSize(16);
        reserveBTN->setFont(font2);
        reserveBTN->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        buyButton = new QPushButton(Game);
        buyButton->setObjectName("buyButton");
        buyButton->setGeometry(QRect(480, 710, 101, 41));
        buyButton->setFont(font2);
        buyButton->setStyleSheet(QString::fromUtf8("border: 2px solid gray;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"padding: 5px;"));
        cardChoosed = new QLabel(Game);
        cardChoosed->setObjectName("cardChoosed");
        cardChoosed->setGeometry(QRect(40, 720, 251, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("TenaliRamakrishna")});
        font3.setPointSize(16);
        font3.setItalic(true);
        cardChoosed->setFont(font3);
        pushButton = new QPushButton(Game);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(600, 80, 21, 21));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("application-exit")));
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(Game);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(600, 50, 21, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
""));
        pushButton_2->setIcon(icon);
        pushButton_3 = new QPushButton(Game);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(600, 20, 21, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("border:none;"));
        pushButton_3->setIcon(icon);

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Splendor", nullptr));
        background_color->setText(QString());
        greenTokenBTN->setText(QString());
        redTokenBTN->setText(QString());
        blueTokenBTN->setText(QString());
        blackTokenBTN->setText(QString());
        jokenTokenBTN->setText(QString());
        whiteTokenBTN->setText(QString());
        numberJokerLBL->setText(QCoreApplication::translate("Game", "X5", nullptr));
        numberBlueLBL->setText(QCoreApplication::translate("Game", "X5", nullptr));
        numberRedLBL->setText(QCoreApplication::translate("Game", "X5", nullptr));
        numberWhiteLBL->setText(QCoreApplication::translate("Game", "X5", nullptr));
        numberBlackLBL->setText(QCoreApplication::translate("Game", "X5", nullptr));
        numberGreenLBL->setText(QCoreApplication::translate("Game", "X5", nullptr));
        cardOne1->setText(QString());
        cardOne2->setText(QString());
        cardOne3->setText(QString());
        cardOne4->setText(QString());
        valueOne1->setText(QString());
        valueOne2->setText(QString());
        valueOne3->setText(QString());
        valueOne4->setText(QString());
        scoreOne1->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreOne3->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreOne2->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreOne4->setText(QCoreApplication::translate("Game", "4", nullptr));
        cardTwo1->setText(QString());
        cardTwo4->setText(QString());
        cardTwo3->setText(QString());
        cardTwo2->setText(QString());
        valueTwo1->setText(QString());
        valueTwo2->setText(QString());
        valueTwo4->setText(QString());
        valueTwo3->setText(QString());
        scoreTwo1->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreTwo4->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreTwo3->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreTwo2->setText(QCoreApplication::translate("Game", "1", nullptr));
        cardThree1->setText(QString());
        cardThree2->setText(QString());
        cardThree3->setText(QString());
        cardThree4->setText(QString());
        valueThree1->setText(QString());
        valueThree2->setText(QString());
        valueThree3->setText(QString());
        valueThree4->setText(QString());
        scoreThree1->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreThree2->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreThree3->setText(QCoreApplication::translate("Game", "1", nullptr));
        scoreThree4->setText(QCoreApplication::translate("Game", "1", nullptr));
        tokenRecive1->setText(QCoreApplication::translate("Game", "1X red", nullptr));
        tokenRecive2->setText(QCoreApplication::translate("Game", "1X blue", nullptr));
        tokenRecive3->setText(QCoreApplication::translate("Game", "1X green", nullptr));
        reserveBTN->setText(QCoreApplication::translate("Game", "Reserve", nullptr));
        buyButton->setText(QCoreApplication::translate("Game", "Buy", nullptr));
        cardChoosed->setText(QCoreApplication::translate("Game", "Row 1 Column 3 Choosed", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
