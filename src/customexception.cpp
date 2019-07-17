#include "customexception.h"

CustomException::~CustomException() { }

const char* CustomException::what() const throw() 
{
    return "throwing the custom exception...!!";
};