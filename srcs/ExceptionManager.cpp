#include "../include/ExceptionManager.hpp"
#include <iostream>


ExceptionManager::ExceptionManager(){}

ExceptionManager::~ExceptionManager(){
    if (exception)
        delete exception;
    exception = NULL;
}


ExceptionManager& ExceptionManager::instance(void)
{
    static ExceptionManager instance;
    return (instance);
}

void ExceptionManager::raise_exception(const std::string& target)
{
    if (exception)
        delete exception;
    exception = source.generate(target);
    if (exception)
        exception->raise();
    else
        throw std::exception();
}

