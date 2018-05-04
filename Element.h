//
// Created by yarin665 on 04/05/18.
//

#ifndef TICTACTOE_ELEMENT_H
#define TICTACTOE_ELEMENT_H

#include <iostream>
#include "Index.h"
#include "IllegalCharException.h"

using namespace std;

class Element {

private:
    char val;
public:
    Element();
    Element(char newVal); //check input - throw execption
    ~Element();

    friend ostream& operator<<(ostream& os, const Element& obj);

    // void operator=(const Element& newVal);
    void operator= (char newVal);

     operator char() const { return val; }

    void setVal(char val);
};



#endif //TICTACTOE_ELEMENT_H
