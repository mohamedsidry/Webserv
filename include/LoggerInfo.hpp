#ifndef LOGGERINFO_HPP
# define LOGGERINFO_HPP

#include "ILogger.hpp"
#include "IColorizer.hpp"

class LoggerInfo: public ILogger, public IColorizer
{
    public:
        LoggerInfo(){};
        LoggerInfo(const LoggerInfo&){};
        LoggerInfo& operator=(const LoggerInfo&){return *this;};
        ~LoggerInfo(){};
        void log(const std::string& message) const;
        const std::string coloriz(const std::string& text) const;
        static ILogger * clone(void);
};



#endif /* LOGGERINFO_HPP */

