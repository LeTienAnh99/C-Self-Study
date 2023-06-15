// Figure 9.6: SalesPerson.cpp
// SalesPerson class member-function definitions.
#include <iostream>
#include <iomanip>
#include "SalesPerson.h" // Include SalesPerson class definition
using namespace std;

// Initialize elements of array sales to 0.0
SalesPerson::SalesPerson() // Constructor to initialize array elements
{
    for ( int i = 0; i < monthsPerYear; ++i )
        sales[ i ] = 0.0;
} // End SalesPerson constructor

// Get 12 sales figures from the user at the keyboard
void SalesPerson::getSalesFromUser()
{
    double salesFigure;

    for ( int i = 1; i <= monthsPerYear; ++i )
    {
        cout << "Enter sales amount for month " << i << ": ";
        cin >> salesFigure;
        setSales( i, salesFigure );
    } // End for
} // End funtion getSalesFromUser

// Set one of the 12 monthly sales figures; function subtracts
// one from month value for proper subscript in sales array
void SalesPerson::setSales( int month, double amount )
{
    // Test for valid month and amount values
    if ( month >= 1 && month <= monthsPerYear && amount > 0 )
        sales[ month - 1 ] = amount; // adjust for subscipts 0-11
    else // Invalid month or amount value
        cout << "Invalid month or sales figure" << endl;
} // End function setSales

// Print total annual sales (with the help of utility function)
void SalesPerson::printAnnualSales()
{
    cout << setprecision( 2 ) << fixed
        << "\nThe total annual sales are: $"
        << totalAnnualSales() << endl; // Call utility function
} // End function printAnnualSales

// Private utility function to total annual sales
double SalesPerson::totalAnnualSales()
{
    double total = 0.0; // Initialize total

    for ( int i = 0; i < monthsPerYear; ++i ) // Summarize sales results
        total += sales[ i ]; // Add month i sales to total

    return total;
} // End function totalAnnualSales