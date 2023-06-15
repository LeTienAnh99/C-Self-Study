// Figure 9.10: fig09_10.cpp
// Demonstrating a default constructor for class Time.
#include <iostream>
#include <stdexcept>
#include "Time.h"
#include "Time.cpp"
using namespace std;

int main()
{ // Class object Time(int, int, int) with t1,t2,t3,t4
    Time t1; // All arguments defaulted
    Time t2( 2 ); // Specify only hour, minute and second defaulted
    Time t3( 21, 34 ); // Specify hour, minute, second defaulted
    Time t4( 12, 25, 42 ); // Specify all the elements
    cout << "Constructor with:\n\nt1: all arguments defaulted\n ";
    t1.printUniversal(); // 00:00:00
    cout << "\n ";
    t1.printStandard(); // 12:00:00 AM

    cout << "\n\nt2: hour specified; minute and second defaulted\n ";
    t2.printUniversal(); // 02:00:00
    cout << "\n ";
    t2.printStandard(); // 2:00:00 AM

    cout << "\n\nt3: hour, minute specified, second defaulted\n ";
    t3.printUniversal(); // 21:34:00
    cout << "\n ";
    t3.printStandard(); // 9:34:00 PM

    cout << "\n\nt4: all elements specified\n ";
    t4.printUniversal(); // 12:25:42
    cout << "\n ";
    t4.printStandard(); // 12:25:42 PM

    // Attempt to initialize t6 with invalid values
    try
    {
        Time t5( 27, 74, 99 ); // All bad values specified
    } // End try
    catch ( invalid_argument &e)
    {
        cout << "\n\nException while initializing t5: " << e.what() << endl;
    } // End catch
} // End main