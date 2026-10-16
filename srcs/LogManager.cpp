#include "../include/LogManager.hpp"


LogManager::LogManager(){}

LogManager::~LogManager(){}


void LogManager::console_log(const std::string level, const std::string& message)
{
    if ( level == "INFO")
        console_log(AAppConstants::INFO_LEVEL, message);
    else if ( level == "WARN")
        console_log(AAppConstants::WARN_LEVEL, message);
    else if (level == "ERROR")
        console_log(AAppConstants::ERROR_LEVEL, message);
}

void LogManager::console_log(unsigned int level, const std::string& message)
{
    ILogger *handler = loggers.map(level);
    if (handler)
        handler->log(message);
}


LogManager& LogManager::instance(void)
{
    static LogManager instance;
    return (instance);
}
