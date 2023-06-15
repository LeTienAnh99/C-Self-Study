// Fig 16.1: DividedByZeroException.h
// Class DividedByZeroException definition
#include <stdexcept> // stdexcept header contains runtime_error
using namespace std;

// DividedByZeroException objects should be thrown by functions
// upon detecting division-by-zero exceptions
class DividedByZeroException : public runtime_error
{ // Derived from class runtime_error
public:
    // Constructor specifies default error message
    DividedByZeroException() : runtime_error( "attempted to divide by zero" )
    {
        // Empty 
    }
}; // End class DividedByZeroException    