// Figure 10/12: fig10_12.cpp
// Demonstrating composition--an object with member objects
#include <iostream>
#include "Date.h"
#include "Date.cpp"
#include "Employee.h" // Employee class definition
#include "Employee.cpp"
using namespace std;

int main()
{
    Date birth( 7, 24, 1949 );
    Date hire( 3, 12, 1988 );
    Employee manager( "Bob", "Blue", birth, hire );

    cout << endl;
    manager.print();
}// End main