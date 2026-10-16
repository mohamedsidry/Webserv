#ifndef LOGGERMAPPER_HPP
# define LOGGERMAPPER_HPP

#include <map>
#include <algorithm>
#include <utility>
#include "ILogger.hpp"
#include "LoggerInfo.hpp"
#include "LoggerWarn.hpp"
#include "LoggerError.hpp"

class LoggerMapper
{
    private:
        std::map<unsigned int, ILogger *> _loggers;
    public:
        LoggerMapper();
        LoggerMapper(const LoggerMapper&);
        LoggerMapper& operator=(const LoggerMapper&);
        ~LoggerMapper();
        ILogger *map(unsigned int i) const;
};



# endif /* LOGGERMAPPER_HPP */ 
