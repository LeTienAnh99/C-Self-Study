// Figure 13.16: BasePlusCommissionEmployee.cpp
// BasePlusCommissionEmployee member-function definitions
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// Constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary )
    : CommissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary ); // Validate and store base salary
} // End BasePlusCommissionEmployee constructor

// Set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    if ( salary >= 0.0 )
        baseSalary = salary;
    else 
        throw invalid_argument( "Base salary must be >= 0.0" );
} // End function setBaseSalary()

// Return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
} // End function getBaseSalary()

// Calculate earnings;
// Override virtual function earnings() in class CommissionEmployee
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() * CommissionEmployee::earnings();
} // End function earnings()

// Print BasePlusCommissionEmployee's information
void BasePlusCommissionEmployee::print() const
{
    cout << "Base-salaried: ";
    CommissionEmployee::print(); // Code reuse
    cout << "; base salary: " << getBaseSalary();
} // End function print