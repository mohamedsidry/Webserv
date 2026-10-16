#ifndef AEXCEPTION_HPP
# define AEXCEPTION_HPP

#include <exception>

class AException : public std::exception
{
    public:
        virtual const char *what() const throw() = 0;
        virtual void raise() const = 0;
        virtual ~AException() throw() {}
};

# endif /* AEXCEPTION_HPP */ 

