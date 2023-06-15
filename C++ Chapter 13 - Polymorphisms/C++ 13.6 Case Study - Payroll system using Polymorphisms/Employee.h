// Figure 13.9: Employee.h
// Employee abstract base class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
    Employee( const string &, const string &, const string & ); // Constructor

    void setFirstName( const string & ); // Set first name
    string getFirstName() const; // Return first name

    void setLastName( const string & ); // Set last name
    string getLastName() const; // Return last name

    void setSocialSecurityNumber( const string & ); // Set SSN
    string getSocialSecurityNumber() const; // Return SSN

    // Pure virtual function makes Employee an abstract base class
    virtual double earnings() const = 0; // Pure virtual
    virtual void print() const; // Virtual function
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
}; // End class Employee.h

#endif