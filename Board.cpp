#include <iostream>
#include "Board.h"
using namespace std;

Board::Board()
{
    size = 2;
    for (size_t i = 0; i < size; i++)
    {
        board.push_back(vector<Element>(size));
    }
}

Board::Board(int newSize)
{
    size = newSize;
    for (size_t i = 0; i < size; i++)
    {
        board.push_back(vector<Element>(size));
    }
}

Board::~Board()
{}

ostream& operator<<(ostream& os, const Board& obj)
{
    for (int i = 0; i <obj.size ; ++i) {
        for (int j = 0; j <obj.size ; ++j) {
            cout<<obj.board[i][j]<< " ";
        }
        cout<<endl;
    }
    return os;

}

Board& Board::operator=(const Board& obj)
{
    if(obj.size!=size){
        IllegalCoordinateException ce{obj.size};
        throw ce;
    }

    else{
        for (int i = 0; i <size ; ++i) {
            for (int j = 0; j <size ; ++j) {
                board[i][j]=obj.board[i][j];
            }

        }
    }

    return *this;
}

Board& Board::operator=(char newVal)
{
    if(newVal == '.')
    {
       *this=Board{size};
    }else{
        IllegalCharException ce;
        ce.setCh(newVal);
        throw ce;
    }

    return *this;
}


Element& Board::operator [](Index index)
{
    if(index.getRow() < 0 || index.getCol() < 0 ||
       index.getRow() >= size || index.getCol() >= size){
        IllegalCoordinateException ce{index};
        throw ce;
    }
    return board[index.getRow()][index.getCol()];
}
