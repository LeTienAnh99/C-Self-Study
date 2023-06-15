// Figure 10.20: fig10_20.cpp
// Static data member tracking the number of objects of a class
#include <iostream>
#include "Employee.h" // Employee class definition
#include "Employee.cpp"
using namespace std;

int main()
{
    // No objects exist; use class name and (::)
    // to access static member function getCount
    cout << "Number of employees before instatiation of any object is "
        << Employee::getCount() << endl; // Use class name
    
    // The following scope creates and destroys
    // Employee objects before main terminates
    {
        Employee e1( " Susan", "Baker" );
        Employee e2( "Robert", "Jones" );

        // Two objects exist; call static member function getCount again
        // using the class name and the scope resolution operator
        cout << "Number of employees after objects are instantiated is "
            << Employee::getCount();
            cout << "\n\nEmployee 1: "
                << e1.getFirstName() << " " << e1.getLastName()
                << "\nEmployee 2: "
                << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
    } // End nested scope in main

    // No objects exist, so call static member function getCount again
    // using the class name and (::)
    cout << "\nNumber of employees after objects are deleted is "
        << Employee::getCount() << endl;
} // End main 