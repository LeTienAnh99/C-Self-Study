// Figure 13.5: BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class derived from class
// CommissionEmployee. Declare Virtual function
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &,
        const string &, double = 0.0, double = 0.0, double = 0.0 );

    void setBaseSalary( double ); // Set base salary
    double getBaseSalary() const; // Return base salary

    virtual double earnings() const; // Calculate earnings
    virtual void print() const; // PRint BasePlusCommissionEmployee object
private:
    double baseSalary; // Base salary
}; // End class BasePlusCommissionEmployee

#endif

