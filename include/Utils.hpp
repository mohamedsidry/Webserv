#ifndef UTILS_HPP

# define UTILS_HPP

#include <string>

class Utils
{
    private:
        Utils();
        Utils(const Utils&);
        Utils& operator=(const Utils&);
        ~Utils();
    
    public:
        static bool is_all_space(const std::string& str);
        static std::string trim_space(const std::string& str);


};


#endif /* UTILS_HPP */

