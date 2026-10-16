#include "../include/ValidationUtils.hpp"

bool ValidationUtils::valid_argc(unsigned int argc, bool raise_exp)
{
    if (argc != AAppConstants::ARGC)
    {
        if (raise_exp)
            ExceptionManager::instance().raise_exception("argc");
        return (false);
    }
    return (true);
}


bool ValidationUtils::valid_filename(const std::string& filename, bool raise_exp)
{
    if (filename.empty() || Utils::is_all_space(filename))
    {
        if (raise_exp)
            ExceptionManager::instance().raise_exception("conf");
        return (false);
    }
    return (true);
}

