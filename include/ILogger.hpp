#ifndef ILOGGER_HPP
# define ILOGGER_HPP

#include <string>
#include <iostream>
#include "AAppConstants.hpp"

class ILogger
{
    public:
        virtual ~ILogger(){};
        virtual void log(const std::string& message) const = 0;
};


#endif /* ILOGGER_HPP */

