// Figure 12.14: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iostream>
#include "CommissionEmployee.h"
using namespace std;

// Constructor using member-initializer list
CommissionEmployee::CommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate ) // Constructor with 5 params
    : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
    setGrossSales( sales ); // Validate and store gross sales
    setCommissionRate( rate ); // Validate and store commission rate
} // End CommissionEmployee constructor

// Declare function setFirstName
void CommissionEmployee::setFirstName( const string &first )
{
    firstName = first; // Should validate
} // End function setFirstName

// Return first name
string CommissionEmployee::getFirstName() const
{
    return firstName;
}

// Declare function setLastName
void CommissionEmployee::setLastName( const string &last )
{
    lastName = last; // Should validate
} // End function setLastName

// Return last name
string CommissionEmployee::getLastName() const 
{
    return lastName;
} // End function getLastName

// Set social security number
void CommissionEmployee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn; // Should validate
} // End function setSocialSecurityNumber

// Return social security number
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // End function getSocialSecucrity Number

// Set gross sales amount
void CommissionEmployee::setGrossSales( double sales )
{
    if ( sales >= 0.0 )
        grossSales = sales;
    else 
        throw invalid_argument( "Gross sales must be >= 0.0" );
} // End function setGrossSales

// Return gross sales ammount
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
} // end function setCommissionRate

// return commission rate
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // end function getCommissionRate

// calculate earnings
double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
} // end function earnings

// print CommissionEmployee object
void CommissionEmployee::print() const
{
    cout << "commission employee: " 
        << getFirstName() << ' ' << getLastName()
        << "\nsocial security number: " << getSocialSecurityNumber()
        << "\ngross sales: " << getGrossSales()
        << "\ncommission rate: " << getCommissionRate();
} // end function print