#include "../include/LoggerError.hpp"


void LoggerError::log(const std::string& message) const
{
    std::cerr << "[ERROR] : "<< coloriz(message) << std::endl;
}
const std::string LoggerError::coloriz(const std::string& text) const
{
    return (AAppConstants::ASCI_ERROR_COLOR + text + AAppConstants::ASCI_RESET_COLOR);
}


ILogger * LoggerError::clone(void)
{
    return new LoggerError();
}
