//
// Created by yarin665 on 03/05/18.
//

#ifndef TASK5_ILLEGALCOORDINATEEXCEPTION_H
#define TASK5_ILLEGALCOORDINATEEXCEPTION_H


#include <exception>
#include "Index.h"
#include <sstream>
#include <stdexcept>
class IllegalCoordinateException : public std::exception
{
public:
    IllegalCoordinateException();
    IllegalCoordinateException(int x, int y);
    virtual const char* what() const throw();
    virtual ~IllegalCoordinateException();
};

#endif //TASK5_ILLEGALCOORDINATEEXCEPTION_H
