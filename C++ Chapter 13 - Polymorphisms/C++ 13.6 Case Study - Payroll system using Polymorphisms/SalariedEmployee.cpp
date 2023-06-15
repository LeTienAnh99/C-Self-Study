// Figure 13.12: SalariedEmployee.cpp
// SalariedEmployee class member-function definitions
#include <iostream>
#include "SalariedEmployee.h"
using namespace std;

// Derived class SalariedEmployee's constructor
SalariedEmployee::SalariedEmployee( const string &first,
    const string &last, const string &ssn, double salary )
    : Employee( first, last, ssn )
{
    setWeeklySalary( salary );
} // End constructor

// Set salary
void SalariedEmployee::setWeeklySalary( double salary )
{
    if ( salary >= 0.0 )
        weeklySalary = salary;
    else 
        throw invalid_argument( "Weekly salary must be >= 0.0" );
} // End function setWeeklySalary

// Return salary
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
} // End function getWeeklySalary

// Calculate earnings;
// Override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
} // End function earnings

// Print SalariedEmployee's information
void SalariedEmployee::print() const
{
    cout << "Salaried employee: ";
    Employee::print(); // Reuse abstract base-class print function
    cout << "\nWeekly salary: " << getWeeklySalary();
} // End function print