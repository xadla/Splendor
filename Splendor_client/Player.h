#ifndef PLAYER_H
#define PLAYER_H

#include <QString>

class Player
{
public:
    Player(QString name);

private:
    QString _name;
    int tokens;
    int score;
};

#endif // PLAYER_H
