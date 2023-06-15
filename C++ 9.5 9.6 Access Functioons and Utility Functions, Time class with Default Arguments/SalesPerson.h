// Figure 9.5: SalesPerson.h
// SalesPerson class definition.
// Member functions will be defined in SalesPerson.cpp
#ifndef SALESPERSON_H
#define SALESPERSON_H

class SalesPerson
{
public:
    static const int monthsPerYear = 12; // Months in one year; This is an array size
    SalesPerson(); // Class constructor
    void getSalesFromUser(); // Input sales from keyboard
    void setSales( int, double ); // Set sales for a specific month
    void printAnnualSales(); // Summarize and print sales
private:
    double totalAnnualSales(); // Prototype for utility function
    double sales[ monthsPerYear ]; // 12 monthly sales figures
}; // End class SalesPerson

#endif