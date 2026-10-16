#include "../include/main.hpp"


void lc()
{
    system("leaks webserv");
}
int main(int argc, char *argv[])
{
    try 
    {
        ValidationUtils::valid_argc(argc, RAISE_EXCP);
        ValidationUtils::valid_filename(argv[1], RAISE_EXCP);

    } catch(const std::exception& e)
    {
        LogManager::instance().console_log(ERROR_LEVEL, e.what());
        LogManager::instance().console_log(WARN_LEVEL, e.what());
        LogManager::instance().console_log(INFO_LEVEL, e.what());
    }
    atexit(lc);
    return (EXIT_FAILURE);
}

