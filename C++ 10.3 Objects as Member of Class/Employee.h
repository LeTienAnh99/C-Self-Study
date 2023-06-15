// Figure 10.10: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" // Include Date class definition
using namespace std;

class Employee
{
public:
    Employee( const string &, const string &,
        const Date &, const Date & );
    void print() const;
    ~Employee(); // Provided to confrim destruction order
private:
    string firstName; // Composition: member object
    string lastName; // Composition: member object
    const Date birthDate; // Composition: member object
    const Date hireDate; // Composition: member object
}; // End class Employee

#endif