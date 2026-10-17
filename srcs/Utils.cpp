#include "../include/Utils.hpp"



bool Utils::is_all_space(const std::string& str)
{
    const std::string whitespace = " \t\n\r\f\v";

    for (size_t i = 0; i < str.length(); ++i)
    {
        if (whitespace.find(str[i]) == std::string::npos)
            return (false);
    }
    return (true);
}

std::string Utils::trim_space(const std::string& str)
{
    const std::string whitespace = " \t\n\r\f\v";
    if (str.empty() || is_all_space(str))
        return ("");
    std::string::size_type start = str.find_first_not_of(whitespace);
    std::string::size_type end = str.find_last_not_of(whitespace);
    return str.substr(start, end - start + 1);
}

