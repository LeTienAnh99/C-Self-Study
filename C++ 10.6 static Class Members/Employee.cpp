// Figure 10.19: Employee.cpp
// Employee class member-functon definitions
#include <iostream>
#include "Employee.h"
using namespace std;

// Define and initialize static data member at global namespace scope
int Employee::count = 0; // Cannot include keyword static

// Define static member function that returns number of
// Employee objects instantiated (declared as static in Employee.h)
int Employee::getCount()
{
    return count;
} // End static function getCount

// Constructor initializes non-static data members and
// increments static data member count
Employee::Employee( const string &first, const string &last )
    : firstName( first ), lastName( last )
{
    ++count; // Increment static count of employees
    cout << "Employee constructor for " << firstName
        << ' ' << lastName << " called." << endl;
} // End Employee constructor

// Destructor deallocates dynamically allocated memory
Employee::~Employee()
{
    cout << "~Employee() called for " << firstName
        << ' ' << lastName << endl;
    --count; // Decrement static count of employees
} // End ~Employee destructor

// Function to return first name of employee
string Employee::getFirstName() const
{
    return firstName; // Return copy of first name
} // End function getFirstName()

// Return last name of employee
string Employee::getLastName() const
{
    return lastName; // Return copy of last name
} // End function getLastName()