// Figure 6.29: fig06_29.cpp
// Demonstrating the recursive function factorial
#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial( unsigned long ); // Function prototype

int main()
{
    // Calculate the factorials of 0 through 10
    for ( int counter = 0; counter <= 10; counter++ )
    {
        cout < setw( 2 ) << counter << "! = " << factorial( counter )
            << endl;
    } // End main
}
// Recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
    if ( number <= 1 ) // Test for base case
        return 1; // Base cases: 0! = 1 and 1! = 1
    else // Recursion step
        return number * factorial( number - 1 );
} // End function factorial


