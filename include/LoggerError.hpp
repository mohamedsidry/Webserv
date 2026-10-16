#ifndef LOGGERERROR_HPP
# define LOGGERERROR_HPP

#include "ILogger.hpp"
#include "IColorizer.hpp"

class LoggerError: public ILogger, public IColorizer
{
    public:
        LoggerError(){};
        LoggerError(const LoggerError&){};
        LoggerError& operator=(const LoggerError&){return *this;};
        ~LoggerError(){};
        void log(const std::string& message) const;
        const std::string coloriz(const std::string& text) const;
        static ILogger * clone(void);
};



#endif /* LOGGERERROR_HPP */

