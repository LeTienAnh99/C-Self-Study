// Figure 13.15: BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class derived from class CommissionEmployee
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &,
        const string &, double = 0.0, double = 0.0, double = 0.0 );

    void setBaseSalary( double ); // Set base salary
    double getBaseSalary() const; // Return base salary

    // Keyword virtual signals intent to override
    virtual double earnings() const; // Calculate earnings
    virtual void print() const; // Print BasePlusCommissionEmployee object
private:
    double baseSalary; // Base salary per week
}; // End class BasePlusCommissionEmployee
#endif