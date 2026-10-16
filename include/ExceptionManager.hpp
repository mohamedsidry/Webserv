#ifndef EXCEPTIONMANAGER_HPP
# define EXCEPTIONMANAGER_HPP

#include <map>
#include <string>
#include "ExceptionFactory.hpp"

class ExceptionManager
{
    private:
        ExceptionFactory source;
        AException* exception;
        static ExceptionManager _instance;
        ExceptionManager(const ExceptionManager&);
        ExceptionManager& operator=(const ExceptionManager&);
    public:
        ExceptionManager();
        ~ExceptionManager();
        void raise_exception(const std::string& exception);
        static ExceptionManager& instance(void);
};

# endif /* EXCEPTIONMANAGER_HPP */

