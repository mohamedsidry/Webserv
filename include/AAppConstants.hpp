
#ifndef APPCONSTANTS_HPP
#define APPCONSTANTS_HPP

#include <string>

class AAppConstants
{
    
    public:
        static const int ARGC = 2;
        static const std::string ASCI_INFO_COLOR;
        static const std::string ASCI_WARN_COLOR;
        static const std::string ASCI_ERROR_COLOR;
        static const std::string ASCI_RESET_COLOR;

        static const int INFO_LEVEL = 1;
        static const int WARN_LEVEL = 2;
        static const int ERROR_LEVEL = 4;
    private:
        virtual void info(void) const = 0;

};


#endif /* AAPPCONSTANTS_HPP */
