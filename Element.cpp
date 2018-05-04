#include "Element.h"



Element::Element()
{
    val ='.';
}

Element::Element(char newVal)
{
    if (newVal =='X' || newVal == 'O'){
        val = newVal;
    } else{
        IllegalCharException ce;
        ce.setCh(newVal);
        throw ce;
    }
}

Element::~Element(){}

ostream& operator<<(ostream& os, const Element& obj)
{

    return os << obj.val;

}




void Element::operator= (char newVal){
    if (newVal =='X' || newVal == 'O'){
        val = newVal;
    } else{
        IllegalCharException ce;
        ce.setCh(newVal);
        throw ce;
    }

}

void Element::setVal(char newVal) {
    if (newVal =='X' || newVal == 'O'){
        Element::val = newVal;
    } else{
        IllegalCharException ce;
        ce.setCh(newVal);
        throw ce;
    }
}
