// Figure 15.9: fig15_09.cpp
// Controlling precision of floating-point values
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double root2 = sqrt( 2.0 ); // Calculate square root of 2
    int places; // Precision, vary from 0-9

    cout << "Square root of 2 with precisions 0-9." << endl    
        << "Precision set by ios_base member function "
        << "precision:" << endl;

    cout << fixed; // Use fixed-point notation

    // Display square root using ios_base function precision
    for ( places = 0; places <= 9; ++places )
    {
        cout.precision( places );
        cout << root2 << endl;
    } // End for

    cout << "\nPrecision set by stream manipulator "
        << "setprecision:" << endl;

    // Set precision for each digit, then display square root
    for ( places = 0; places <= 9; ++places )
        cout << setprecision( places ) << root2 << endl;
} // End main