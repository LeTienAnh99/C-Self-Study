// Figure 10.3: fig10_03.cpp
// Attempting to access a const object with non-const member functions.
#include "Time.h" // Include Time class definition
#include "Time.cpp"
int main()
{
    Time wakeUp( 6, 45, 0 ); // Non-constant object
    const Time noon( 12, 0, 0 ); // Constant object
                            // OBJECT        MEMBER FUNCTION
    wakeUp.setHour( 18 );   // non-const     non-const      --> OK

    noon.setHour( 12 );     // const         non-const      --> ERROR

    wakeUp.getHour();       // non-const     non-const      --> ERROR

    noon.getMinute();       // const         non-const      --> ERROR
    noon.printUniversal();  // const         const          --> OK

    noon.printStandard();   // const         non-const      --> ERROR
} // End main