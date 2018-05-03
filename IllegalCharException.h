//
// Created by yarin665 on 03/05/18.
//

#ifndef TASK5_ILLEGALCHAREXCEPTION_H
#define TASK5_ILLEGALCHAREXCEPTION_H

#include <stdexcept>
class IllegalCharException : public std::exception
{
public:
    IllegalCharException();
    IllegalCharException(char inVal);
    virtual const char* what() const throw();
    virtual ~IllegalCharException();
};

#endif //TASK5_ILLEGALCHAREXCEPTION_H
