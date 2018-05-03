#pragma once
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
    Element& operator [](Index index);

};
