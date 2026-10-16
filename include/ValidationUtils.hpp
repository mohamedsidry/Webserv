#ifndef VALIDATIONUTILS_HPP
# define VALIDATIONUTILS_HPP

#include <string>
#include "ExceptionManager.hpp"
#include "AAppConstants.hpp"

class ValidationUtils
{

    public:
        static bool valid_argc(unsigned int count, bool raise_exp);
        static bool valid_filename(const std::string& file, bool raise_exp);
};

#endif /* VALIDATIONUTILS_HPP */

