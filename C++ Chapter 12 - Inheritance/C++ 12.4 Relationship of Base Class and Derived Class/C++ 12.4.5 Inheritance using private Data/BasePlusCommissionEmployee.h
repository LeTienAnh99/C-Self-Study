// Figure 12.10: BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class derived from class
// CommissionEmployee.
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

    double earnings() const; // Calculate earnings
    void print() const; // PRint BasePlusCommissionEmployee object
private:
    double baseSalary; // Base salary
}; // End class BasePlusCommissionEmployee

#endif