//
// Created by yarin665 on 03/05/18.
//

#include "IllegalCharException.h"

IllegalCharException::IllegalCharException()
{
}


IllegalCharException::~IllegalCharException()
{
}

const char* IllegalCharException::what() const throw()
{
    return "index exception happened";
}