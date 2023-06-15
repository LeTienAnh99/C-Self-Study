// Figure 5.6: fig05_06.cpp
// Compound interest calculations with for.
#include <iostream>
#include <cmath.h>
#include <iomanip>

using namespace std;

int main()
{
    double r; // Annual interest rate
    double p; // Original amount invested
    double a; // Amount on deposit at the end of the nth year
    int n;
    p = 1000.0;
    r = 0.05;
    // a = p * ( 1 + r )^n; <- THIS IS WRONG!
    // pow(x,y) <- USE THIS INSTEAD
    // pow(x,y) calculates the value of x raised to the yth power.
    // Display header:
    cout << "The amount of money in the account at the end of each year for 10 years:\n";
    cout << "Year" << setw(21) << "Amount on deposit" << endl; // endl is for creating a new line after this
    // setw is a stream manipulator
    // Set floating-point number format to be 2 digit
    cout << fixed << setprecision(2);

    // Calculate amount on deposit for each of ten years
    for ( n = 1; n <= 10; n++ )
    {
        a = p * pow( 1 + r, n );
        // Display the year and the amount
        cout << setw(4) << n << setw(21) << a << endl;
    } // End for
} // End main
