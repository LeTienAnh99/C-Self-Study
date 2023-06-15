// Figure 10.11: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// Constructor uses member initializer list to pass initializer
// values to constructors of member objects
Employee::Employee( const string &first, const string &last,
    const Date &dateOfBirth, const Date &dateOfHire )
    : firstName( first ), // Initialize firstName
      lastName( last ), // Initialize lastName
      birthDate( dateOfBirth ), // Initialize birthDate
      hireDate( dateOfHire ) // Initialize hireDate
{
    // Output Employee object to show when constructor is called
    cout << "Employee object constructor: "
        << firstName << ' ' << lastName << endl; 
} // End Employee constructor

// Print Employee object
void Employee::print() const
{
    cout << lastName << ", " << firstName << " Hired: ";
    hireDate.print();
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
} // End function print

// Output Employee object to show when its destructor is called
Employee::~Employee()
{
    cout << "Employee object destructor: "
        << lastName << ", " << firstName << endl;
} // End ~Employee destructor