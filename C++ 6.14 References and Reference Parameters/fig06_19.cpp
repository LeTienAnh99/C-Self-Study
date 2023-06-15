// Figure 6.19: fig06_19.cpp
// Comparing pass-by-value and pass-by-reference with references
#include <iostream>
using namespace std;

int squareByValue( int ); // Function prototype (value pass)
void squareByReference( int & ); // Function prototype (reference pass)

int main()
{
    int x = 2; // Value to square using squareByValue
    int z = 4; // Value to square using squareByReference

    // Demonstrate squareByValue
    cout << "x = " << x << " before squareByValue\n";
    cout << "value returned by squareByValue: "
        << squareByValue( x ) << endl;
    cout << "x = " << x << " after squareByValue\n" << endl;

    // Demonstrate squareByReference
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference( z );
    cout << "z = " << z << " after squareByReference" << endl;
} // End main

// squareByValue multiplies number by itself, stores the
// result in number and returns the new value of number
int squareByValue( int number )
{
    return number *= number; // Caller's argument not modified in pass-by-value
} // End function squareByValue

// squareByReference multiplies numberRef by itself and stores the result
// in the variable to which numberRef refers in function main
void squareByReference( int &numberRef )
{
    numberRef *= numberRef; // Caller's argument modified
} // End function squareByReference
