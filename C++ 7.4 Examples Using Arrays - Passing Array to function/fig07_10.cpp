// Figure 7.10: fig07_10.cpp
// Roll a six-sided die 6 mils times
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    const int arraySize = 7; // Ignore element zero
    int freq[ arraySize ] = {}; // Initialize all elements to 0

    srand( time( 0 ) ); // Seed random number generator

    // Roll die 6,000,000 times; use die value as frequency index
    for ( int roll = 1; roll <= 6000000; roll++ )
    {
        ++freq[ 1 + rand() % 6 ]; // Random from 1 to 6
    }
        cout << "Face" << setw( 13 ) << "Frequency" << endl;

        // Output each array element's value
    for ( int face = 1; face < arraySize; ++face )
    {
            cout << setw( 4 ) << face << setw( 13 ) << freq[ face ]
                << endl;
    }
} // End main
