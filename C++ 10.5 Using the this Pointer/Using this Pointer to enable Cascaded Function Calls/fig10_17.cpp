// Figure 10.17: fig10_17.cpp
// Cascading member-function calls with the this pointer.
#include <iostream>
#include "Time.h" // Time class definition
#include "Time.cpp"
using namespace std;

int main()
{
    Time t; // Create Time , name t
    // Cascaded function calls
    t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );

    // Output time in Universal and Standard formats
    cout << "Universal time: ";
    t.printUniversal();

    cout << "\nStandard time: ";
    t.printStandard();

    cout << "\n\nNew standard time: ";
    t.setTime( 20, 20, 20 ).printStandard();
    cout << endl;
}