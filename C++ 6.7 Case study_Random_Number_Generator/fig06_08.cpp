// Fig. 6.8: fig06_08.cpp
// Shifted and scaled random integers
#include <iostream>
#include <iomanip>
#include <cstdlib> // Contains function prototype for rand
using namespace std;
//*** rand() generates unsigned integer from 0 to RAND_MAX
//*** To produce integers in the range 0 to 5, use the modulus operator %
int main()
{
    // Loop 20 times
    for (int counter = 1; counter <= 20; counter++)
    {
        // Pick random number from 1 to 6 and output it
        cout << setw( 10 ) << ( 1 + rand() % 6 );
        // "1 + rand() % 6" is to output integer from 1 to 6
        // If counter is divisible by 5, start a new line of output
        if ( counter % 5 == 0 )
            cout << endl;
    } // End for
} // End main

