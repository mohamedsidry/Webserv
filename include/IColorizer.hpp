#ifndef ICOLORIZER_HPP
# define ICOLORIZER_HPP

#include <string>

class IColorizer
{
    public:
        virtual ~IColorizer(){};
        virtual const std::string coloriz(const std::string& message) const = 0;
};


#endif /* ICOLORIZER_HPP */
