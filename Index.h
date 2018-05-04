//
// Created by yarin665 on 04/05/18.
//

#ifndef TICTACTOE_INDEX_H
#define TICTACTOE_INDEX_H

class Index
{
private:
    int row, col;
public:
    Index();
    Index(int newRow, int newCol);

    ~Index();

    int getRow() const;

    int getCol() const;

};



#endif //TICTACTOE_INDEX_H
