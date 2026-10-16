#ifndef EXCEPTIONFACTORY_HPP
# define EXCEPTIONFACTORY_HPP

#include <map>
#include <string>
#include "AException.hpp"
#include "ExceptionsWrapper.hpp"


class ExceptionFactory
{
    private:
        typedef AException* (*ExceptionGenerator)(void);
        std::map<const std::string, ExceptionGenerator> exceptions;

    public:
        ExceptionFactory();
        ExceptionFactory(const ExceptionFactory&);
        ExceptionFactory& operator=(const ExceptionFactory&);
        ~ExceptionFactory();

        AException* generate(const std::string& target);

};

# endif /* EXCEPTIONFACTORY_HPP */

