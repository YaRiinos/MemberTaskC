#include "IllegalCoordinateException.h"
/* Constructor */

IllegalCoordinateException::IllegalCoordinateException()
{
}


IllegalCoordinateException::~IllegalCoordinateException()
{
}

const char* IllegalCoordinateException::what() const throw()
{
    return "index exception happened";
}