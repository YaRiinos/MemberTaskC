//
// Created by yarin665 on 05/05/18.
//

#ifndef TICTACTOE_PLAYER_H
#define TICTACTOE_PLAYER_H

#include "Board.h"


class Player {
public:
    virtual const string name() const  { return playerName; }

    virtual const Coordinate play(const Board& board) ;

    char myChar;
    string playerName;
    bool won;

    char getChar() const;

    void setMyChar(char myChar);

    Player& operator=(const Player& obj);
};


#endif //TICTACTOE_PLAYER_H
