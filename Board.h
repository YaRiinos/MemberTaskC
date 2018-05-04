//
// Created by yarin665 on 04/05/18.
//

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H

#include <iostream>
#include <vector>
#include "Element.h"
#include "Index.h"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"

using namespace std;

class Board
{
private:
    vector<vector<Element> > board;
    int size;
public:
    Board();
    Board(int size);
    ~Board();

    friend ostream& operator<<(ostream& os, const Board& obj);

    Board& operator=(const Board& obj);
    Board& operator=(const char newVal);
    Element& operator [](Index index);

};
#endif //TICTACTOE_BOARD_H
