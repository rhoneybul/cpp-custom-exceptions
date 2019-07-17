#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H

#include <exception>

// class CustomException : public std::exception
// {
// public:
//     CustomException();
//     virtual ~CustomException() throw();
//     virtual const char* what() const throw();
// };

class CustomException : public std::exception
{
    public:
        virtual const char* what () const throw ();
        ~CustomException();
};

#endif // CUSTOMEXCEPTION_H