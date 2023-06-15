// Figure 13.13: CommissionEmployee.h
// CommissionEmployee class derived from class Employee.
#ifndef COMMISSION_H
#define COMMISSION_H
// CommissionEmployee derived from Employee, so must include Employee.h
#include "Employee.h"

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee( const string &, const string &,
        const string &, double = 0.0, double = 0.0 );

    void setCommissionRate( double ); // Set commission rate
    double getCommissionRate() const; // Return commission rate

    void setGrossSales( double ); // Set gross sales
    double getGrossSales() const; // Return gross sales amount

    // Keyword virtual signals intent to override
    virtual double earnings() const; // Calculate earnings
    virtual void print() const; // Print CommissionEmployee object
private:
    double grossSales; // Gross weekly sales
    double commissionRate; // Commission percentage
}; // End class CommissionEmployee

#endif