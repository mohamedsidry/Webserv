#include "../include/LoggerInfo.hpp"


void LoggerInfo::log(const std::string& message) const
{
    std::cout << coloriz( "[INFO] : "+ message) << std::endl;
}
const std::string LoggerInfo::coloriz(const std::string& text) const
{
    return (AAppConstants::ASCI_INFO_COLOR + text + AAppConstants::ASCI_RESET_COLOR);
}


ILogger * LoggerInfo::clone(void)
{
    return new LoggerInfo();
}

