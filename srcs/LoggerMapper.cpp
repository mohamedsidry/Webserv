#include "../include/LoggerMapper.hpp"

LoggerMapper::LoggerMapper()
{
    _loggers.insert(std::make_pair(
        AAppConstants::INFO_LEVEL, LoggerInfo::clone()));

    _loggers.insert(std::make_pair(
        AAppConstants::WARN_LEVEL, LoggerWarn::clone()));

    _loggers.insert(std::make_pair(
        AAppConstants::ERROR_LEVEL, LoggerError::clone()));
}

LoggerMapper::LoggerMapper(const LoggerMapper& copy):_loggers(copy._loggers){}

LoggerMapper& LoggerMapper::operator=(const LoggerMapper& other)
{
    if (this != &other)
        this->_loggers = other._loggers;
    return (*this);
}




LoggerMapper::~LoggerMapper()
{
    for (std::map<unsigned int, ILogger*>::iterator it = _loggers.begin();
         it != _loggers.end(); ++it)
    {
        delete it->second;
    }
}


ILogger* LoggerMapper::map(unsigned int level) const
{
    std::map<unsigned int, ILogger*>::const_iterator it;

    it = _loggers.find(level);

    if (it != _loggers.end())
        return it->second;

    return nullptr;
}



