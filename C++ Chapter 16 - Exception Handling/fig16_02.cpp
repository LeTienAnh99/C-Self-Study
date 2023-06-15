// Figure 16.2: fig16_02.cpp
// A simple exception-handling example that checks for
// divide-by-zero exceptions.
#include <iostream>
#include "DividedByZeroException.h"
using namespace std;

// Perform division and throw DivideByZeroException object if
// divide-by-zero exception occurs
double quotient( int numerator, int denominator )
{
    // Throw DividedByZeroException if trying to divide by 0
    if ( denominator == 0 )
        throw DividedByZeroException(); // Terminate function

    // Return division result
    return static_cast< double >( numerator ) / denominator;
} // End function quotient

int main()
{
    int number1; // User-specified numerator
    int number2; // Usser-specified deno
    double result; // Result of division

    cout << "Enter 2 integers (end-of-file to end): ";

    //  Enable user to enter 2 integers to divide
    while ( cin >> number1 >> number2 )
    {
        // Try block contains code that might throw exception
        // and code that will not execute if an exception occurs
        try 
        {
            result = quotient( number1, number2 );
            cout << "The quotient is: " << result << endl;
        } // End try
        catch ( DividedByZeroException &dividedByZeroException )
        {
            cout << "Exception occurred: "
                << dividedByZeroException.what() << endl;
        } // End catch

        cout << "\nEnter 2 integers (end-of-file to end): ";
    } // End while

    cout << endl;
} // End main