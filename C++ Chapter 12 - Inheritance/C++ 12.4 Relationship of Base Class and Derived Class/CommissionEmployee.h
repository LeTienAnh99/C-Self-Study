// Figure 12.12: CommisionEmployee.h
// CommisionEmployee class definition with protected data.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class
using namespace std;

class CommissionEmployee
{
public:
    CommissionEmployee( const string &, const string &, const string &,
        double = 0.0, double = 0.0 );

    void setFirstName( const string & ); // Set first name
    string getFirstName() const; // Return first name
    
    void setLastName( const string & ); // Set last name
    string getLastName() const; // Return last name

    void setSocialSecurityNumber( const string & ); // Set SSN
    string getSoCialSecurityNumber() const; // Return SSN

    void setGrossSales( double ); // Set gross sales amount
    double getGrossSales() const; // Return gross sales amount

    void setCommissionRate( double ); // Set commission rate (percentage)
    double getCommissionRate() const; // Return commission rate

    double earnings() const; // Calculate earnings
    void print() const; // Print CommissionEmployee object
protected:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales; // Gross weekly sales
    double commissionRate; // Commission percentage
}; // End class CommissionEmployee

#endif