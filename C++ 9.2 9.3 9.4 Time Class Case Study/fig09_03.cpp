// Figure 9.3: fig09_03.cpp
// Program to test class Time
// NOTE: This file muts be compiled with Time.cpp
#include <iostream>
#include "Time.h" // Include definition of class Time from Time.h
#include "Time.cpp"
using namespace std;

int main()
{
    Time t; // Instantiate object t of class Time

    // Output Time object t's initial values
    cout << "The initial universal time is ";
    t.printUniversal(); // 00:00:00
    cout << "\nThe initial standard time is ";
    t.printStandard(); // 12:00:00 AM

    t.setTime( 13, 27, 6 ); // Change time; hour-minute-second

    // Output Time object t's new values
    cout << "\n\nUniversal time after setTime is ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard time after setTime is ";
    t.printStandard(); // 1:27:06 PM
    // Attempt to set the time with invalid values
    try
    {
        t.setTime( 99, 99, 99 ); // All values out of range
    }
    catch ( invalid_argument &e )
    {
        cout << "\nException: " << e.what() << endl << endl;
    } // End catch

   // Output t's values after specifying invalid values
    cout << "\nAfter attempting invalid settings: "
        << "\nUniversal time: ";
    t.printUniversal(); // 00:00:00
    cout << "\nStandard time: ";
    t.printStandard(); // 12:00:00 AM
    cout << endl << endl;
} // End main