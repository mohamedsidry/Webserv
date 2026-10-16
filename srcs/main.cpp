#include "../include/main.hpp"


int main(int argc, char *argv[])
{
    try 
    {
        ValidationUtils::valid_argc(argc, RAISE_EXCP);
        ValidationUtils::valid_filename(argv[1], RAISE_EXCP);

    } catch(const std::exception& e)
    {
        LogManager::instance().console_log(ERROR_LEVEL, e.what());
    }
    return (EXIT_FAILURE);
}

