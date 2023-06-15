// Fig. 6.9: fig06_09.cpp
// Rolling a six-sided die 6 million times and count for each side
#include <iostream>
#include <iomanip>
#include <cstdlib> // Contains function prototype for rand
using namespace std;

int main()
{
    int freq1 = 0; // Count of 1s rolled
    int freq2 = 0; // Count of 2s rolled
    int freq3 = 0; // Count of 3s rolled
    int freq4 = 0; // Count of 4s rolled
    int freq5 = 0; // Count of 5s rolled
    int freq6 = 0; // Count of 6s rolled

    int face; // Stores most recently rolled value

    // Summarize results of 6 mils rolls of a die
    for ( int roll = 1; roll <= 6000000; ++roll )
    {
        face = 1 + rand() % 6; // Random number from 1 to 6

        // Determine roll value 1-6 and increment appropriate counter
        switch ( face )
        {
        case 1:
            ++freq1; // Increment the 1s counter
            break;
        case 2:
            ++freq2; // Increment the 2s counter
            break;
        case 3:
            ++freq3; // Increment the 3s counter
            break;
        case 4:
            ++freq4; // Increment the 4s counter
            break;
        case 5:
            ++freq5; // Increment the 5s counter
            break;
        case 6:
            ++freq6; // Increment the 6s counter
            break;
        default: // Invalid value
            cout << "Program should never get here!";
        } // End switch
    } // End for

    cout << "Face" << setw( 13 ) << "Frequency" << endl; // Output headers
    cout << "   1" << setw( 13 ) << freq1
        << "\n   2" << setw( 13 ) << freq2
        << "\n   3" << setw( 13 ) << freq3
        << "\n   4" << setw( 13 ) << freq4
        << "\n   5" << setw( 13 ) << freq5
        << "\n   6" << setw( 13 ) << freq6 << endl;
} // End main
