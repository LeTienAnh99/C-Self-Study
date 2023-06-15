// Figure 9.16: fig09_16.cpp
// Demonstrating a public member function that
// returns a reference to a private data member
#include <iostream>
#include "Time.h" // include definition of class Time
#include "Time.cpp"
using namespace std;

int main()
{
    Time t; // Create Time object

    // Initialize hourRef with the reference returned by badSetHour
    int &hourRef = t.badSetHour( 20 ); // 20 is a valid hour

    cout << "Valid hour before modification: " << hourRef;
    hourRef = 30; // Use hourRef to set invalid value in Time object t
    cout << "\nInvalid hour after modification: " << t.getHour();

    // Dangerous: Function call that returns
    // a reference can be used as an lvalue!
    t.badSetHour( 12 ) = 74; // Assign another invalid value to hour

    cout << "\n\n**************************\n"
        << "POOR PROGRAMMING PRACTICE!!!\n"
        << "t.badSetHour( 12 ) as an lvalue, invalid hour: "
        << t.getHour()
        << "\n***************************" << endl;
} // End main