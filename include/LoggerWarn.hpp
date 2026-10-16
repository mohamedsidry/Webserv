#ifndef LOGGERWARN_HPP
# define LOGGERWARN_HPP

#include "ILogger.hpp"
#include "IColorizer.hpp"

class LoggerWarn: public ILogger, public IColorizer
{
    public:
        LoggerWarn(){};
        LoggerWarn(const LoggerWarn&){};
        LoggerWarn& operator=(const LoggerWarn&){return *this;};
        ~LoggerWarn(){};
        void log(const std::string& message) const;
        const std::string coloriz(const std::string& text) const;
        static ILogger * clone(void);

};



#endif /* LOGGERWARN_HPP */

