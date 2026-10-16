#include "../include/ExceptionFactory.hpp"
#include <iostream>

ExceptionFactory::ExceptionFactory()
{
    exceptions.insert(std::pair<const std::string, ExceptionGenerator>("argc", &ExceptionsWrapper::ExceptionArgc::clone));
    exceptions.insert(std::pair<const std::string, ExceptionGenerator>("default", &ExceptionsWrapper::ExceptionDefault::clone));
    exceptions.insert(std::pair<const std::string, ExceptionGenerator>("conf", &ExceptionsWrapper::ExceptionConfigFile::clone));
}


ExceptionFactory::ExceptionFactory(const ExceptionFactory& copy) : exceptions(copy.exceptions){}

ExceptionFactory& ExceptionFactory::operator=(const ExceptionFactory& other)
{
    if (this != &other)
        this->exceptions = other.exceptions;
    return (*this);
}

ExceptionFactory::~ExceptionFactory(){}


AException* ExceptionFactory::generate(const std::string& target)
{
    std::map<const std::string, ExceptionGenerator>::const_iterator it;

    it = exceptions.find(target);
    if (it != exceptions.end())
        return it->second();
    it  = exceptions.find("default");
    if (it != exceptions.end())
        return (it->second());
    return (NULL);
}


