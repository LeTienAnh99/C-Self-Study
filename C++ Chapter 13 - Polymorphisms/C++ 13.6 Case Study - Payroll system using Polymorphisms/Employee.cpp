// Figure 13.10: Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions
#include <iostream>
#include "Employee.h"
using namespace std;

// Constructor declaration
Employee::Employee( const string &first, const string &last,
    const string &ssn )
    : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
    // Empty body
} // End Employee constructor

// Set first name
void Employee::setFirstName( const string &first )
{
    firstName = first;
} // End function setFirstName

// Declare function getFirstName()
string Employee::getFirstName() const
{
    return firstName;
} // End function getFirstName

// Declare functon setLastName()
void Employee::setLastName( const string &last )
{
    lastName = last;
} // End function setLastName

string Employee::getLastName() const
{
    return lastName;
} // End function getLastName

// Set social security number (ssn)
void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn; // Should validate
} // End function setSocialSecurityNumber

// Return social security number
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // End function getSocialSecurityNumber


// Print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{
    cout << getFirstName() << ' ' << getLastName()
        << "\nSocial security number: " << getSocialSecurityNumber();
} // End function print