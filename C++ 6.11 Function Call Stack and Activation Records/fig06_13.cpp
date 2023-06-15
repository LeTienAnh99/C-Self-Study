// Fig. 6.13: fig06_13.cpp
// Square function used to demonstrate the function
// call stack and activation records
#include <iostream>
using namespace std;

int square( int ); // Prototype for function square

int main()
{
    int a = 10; // Value to square (local automatic variable in main)

    cout << a << " squared: " << square( a ) << endl; // Display a squared of a

} // End main

// Returns the square of an integer
int square( int x ) // x is a local variable
{
    return x * x; // Calculate square and return result
} // End function square
