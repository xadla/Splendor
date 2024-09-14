#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QVector>
#include <QMap>

#include "Player.h"

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

    void start(QMap<int, int> bots, QVector<Player> players);

private:
    Ui::Game *ui;
};

#endif // GAME_H
