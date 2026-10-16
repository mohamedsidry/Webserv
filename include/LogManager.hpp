#ifndef LOGMANAGER_HPP
# define LOGMANAGER_HPP

#include <string>
#include "LoggerMapper.hpp"


class LogManager
{
    private:
        static LogManager _instance;
        LoggerMapper       loggers;
        LogManager();
        LogManager(const LogManager& copy);
        LogManager& operator=(const LogManager& other);
    public:
        ~LogManager();
        static LogManager& instance(void);
        void console_log(const std::string level, const std::string& message);
        void console_log(unsigned int level, const std::string& message);
};




#endif /* LOGMANAGER_HPP */

