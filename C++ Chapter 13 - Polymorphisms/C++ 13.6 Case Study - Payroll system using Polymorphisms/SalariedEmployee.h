// Figure 13.11: SalariedEmployee.h
// SalariedEmployee class derived from Employee.
#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h" // Employee class definition

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( const string &, const string &,
        const string &, double = 0.0 );

    void setWeeklySalary( double ); // Set weekly salary
    double getWeeklySalary() const; // Return weekly salary

    // Keyword virtual signals intent to override
    virtual double earnings() const; // Calculate earnings
    virtual void print() const; // Print SalariedEmployee object
private:
    double weeklySalary; // Salary per week
}; // End class SalariedEmployee

#endif