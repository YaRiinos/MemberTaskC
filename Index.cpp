#include "Index.h"



Index::Index()
{
    row=0;
    col=0;
}

Index::Index(int newRow, int newCol)
{

    row=newRow;
    col=newCol;
}

int Index::getRow() const {
    return row;
}

int Index::getCol() const {
    return col;
}

Index::~Index()
{
}