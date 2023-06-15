// Figure 13.14: CommissionEmployee.cpp
// CommissionEmployee class member-function definitions.
#include <iostream>
#include "CommissionEmployee.h"
using namespace std;

// Constructor
CommissionEmployee::CommissionEmployee( const string &first,
    const string &last, const string &ssn, double sales, double rate )
    : Employee( first, last, ssn )
{
    setGrossSales( sales );
    setCommissionRate( rate );
} // End constructor

// Set gross sales amount
void CommissionEmployee::setGrossSales( double sales )
{
    if ( sales >= 0 )
        grossSales = sales;
    else    
        throw invalid_argument( "Gross sales must be >= 0.0" );
} // End function setGrossSales()

// Return gross sales amount
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
} // End function getGrossSales()

// Set commission rate
void CommissionEmployee::setCommissionRate( double rate )
{
    if ( rate > 0.0 && rate < 1.0 )
        commissionRate = rate;
    else 
        throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
} // End function setCommissionRate()

// Return commissiion rate
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // End function getCommissionRate()

// Calcualte earnings; override pure virtual function earnings() in class Employee
double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
} // End function earnings()

// Print CommissionEmployee's information
void CommissionEmployee::print() const
{
    cout << "Commission employee: ";
    Employee::print(); // Code reuse
    cout << "\nGross sales: " << getGrossSales() 
        << "; commission rate: " << getCommissionRate();
} // End function print