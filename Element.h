
#ifndef TASK5_ELEMENT_H
#define TASK5_ELEMENT_H


#pragma once

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
};


#endif //TASK5_ELEMENT_H
