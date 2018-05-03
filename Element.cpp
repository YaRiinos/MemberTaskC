#include "Element.h"



Element::Element()
{
    val ='.';
}

Element::Element(char newVal)
{
    if (newVal!='X' && newVal!='O'&& newVal!='.'){
        //throw IllegalCharException(newVal);
    } else{
        val=newVal;
    }
}

Element::~Element()
= default;

ostream& operator<<(ostream& os, const Element& obj)
{

    return os << obj.val;

}



void Element::operator= (char newVal){
    if(val != 'X' && val != 'O'){
        throw IllegalCharException(newVal);
    }
    val = newVal;
}


