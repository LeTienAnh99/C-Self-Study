// Exercise 6.13
// Rounding number
// Read several number and round them to the nearest integer,
// print both the original and the rounded number
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double y, x;
double a; // Original value
int n; // Counter for input numbers
double roundNum( double ); // Function prototype

int main()
{
    cout << "Enter numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++ )
    {
        cout << "Enter their values: ";
        cin >> a;
        cout << "Original value: " << a << endl;
        cout << "Rounded value: " << roundNum( a ) << endl;
    }
}

double roundNum( double x )
{
    y = floor( x + .5 ); // Rounding using floor()
    return y; // "return x;" will return the value of x, not value of equation y.
}
