#include "../include/ExceptionsWrapper.hpp"





/* Override:  argc exception  */
const char* ExceptionsWrapper::ExceptionArgc::what(void) const throw() {return ("Invalid arguments count .");}

void ExceptionsWrapper::ExceptionArgc::raise() const { throw *this;}

AException* ExceptionsWrapper::ExceptionArgc::clone(void){return (new ExceptionsWrapper::ExceptionArgc());}


/* Override:  unknown exception */
const char* ExceptionsWrapper::ExceptionDefault::what(void) const throw() {return ("something went wrong .");}

void ExceptionsWrapper::ExceptionDefault::raise() const { throw *this;}

AException* ExceptionsWrapper::ExceptionDefault::clone(void){return (new ExceptionsWrapper::ExceptionDefault());}

/* MORE TO ADD HERE */



