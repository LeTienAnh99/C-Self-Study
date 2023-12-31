// Figure 6.30: fig06_30.cpp
// Testing the recursive fibonacci function
#include <iostream>
using namespace std;

unsigned long fibonacci( unsigned long ); // Function prototype

int main()
{
    // Calculate the fibonacci values of 0 through 10
    for ( int counter = 0; counter <= 10; ++counter)
        cout << "fibonacci( " << counter << " ) = "
            << fibonacci( counter ) << endl;
    // Similar to: cout << "fibonacci(" ") << counter << " = " << fibonacci(counter) << endl;
    // Display higher fibonacci values
    cout << "fibonacci( 20 ) = " << fibonacci( 20 ) << endl;
    cout << "fibonacci( 30 ) = " << fibonacci( 30 ) << endl;
    cout << "fibonacci( 35 ) = " << fibonacci( 35 ) << endl;
} // End main

// Recursive function fibonacci definition
unsigned long fibonacci( unsigned long number )
{
    if ( ( number == 0 ) || ( number == 1 ) ) // Base cases
        return number;
    else // Recursive step
        return fibonacci( number - 1 ) + fibonacci( number - 2 );
} // End function fibonacci
