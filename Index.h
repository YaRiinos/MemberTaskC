#ifndef TASK5_INDEX_H
#define TASK5_INDEX_H


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


#endif //TASK5_INDEX_H
