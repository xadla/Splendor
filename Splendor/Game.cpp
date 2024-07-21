#include "Game.h"
#include "ui_Game.h"

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    setFixedSize(1366, 768);

}

Game::~Game()
{
    delete ui;
}

void Game::start(QMap<int, int> bots, QVector<Player> players)
{
    this->show();
}
