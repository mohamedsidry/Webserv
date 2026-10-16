#ifndef EXCEPTIONWRAPPER_HPP
# define EXCEPTIONWRAPPER_HPP

#include "AException.hpp"

class ExceptionsWrapper
{
    public:
        class ExceptionArgc : public AException
        {
            public:
                const char *what(void) const throw();
                void raise () const;
                static AException* clone(void);
        };

        class ExceptionDefault : public AException
        {
            public:
                const char * what(void) const throw();
                void raise() const;
                static AException* clone(void);
        };
};



#endif /* EXCEPTIONWRAPPER_HPP */

