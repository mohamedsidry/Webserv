#include "../include/LoggerWarn.hpp"


void LoggerWarn::log(const std::string& message) const
{
    std::cout << coloriz( "[WARN] : "+ message) << std::endl;
}
const std::string LoggerWarn::coloriz(const std::string& text) const
{
    return (AAppConstants::ASCI_WARN_COLOR + text + AAppConstants::ASCI_RESET_COLOR);
}

ILogger * LoggerWarn::clone(void)
{
    return new LoggerWarn();
}

