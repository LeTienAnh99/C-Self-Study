// Figure 10.18: Employee.h
// Employee class definition with a static data member to
// track the number of Employee objects in memory
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
    Employee( const string &, const string & ); // Constructor
    ~Employee(); // Destructor
    string getFirstName() const; // Return first name
    string getLastName() const; // Return last name

    // Static member function
    static int getCount(); // Return number of objects instantiated
private:
    string firstName;
    string lastName;

    // Static data
    static int count; // Number of objects instantiated
}; // End class Employee
#endif