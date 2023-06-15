// Figure 21.6: fig21_06.cpp
// Printing as unsigned integer in bits
#include <iostream>
#include <iomanip>
using namespace std;

void displayBits( unsigned ); // Function prototype
// unsigned int has size of 4 bytes (32 bits), range from 0-255
int main()
{
    unsigned inputValue; // Integral value to print in binary

    cout << "Enter an unsigned integer: ";
    cin >> inputValue;
    displayBits( inputValue );
} // End main

// Display bits of an unsigned integer value
void displayBits( unsigned value )
{ // 8 bit * size của unsigned (là 4 bytes)
    const int SHIFT = 8 * sizeof( unsigned ) - 1;
    const unsigned MASK = 1 << SHIFT;

    cout << setw( 10 ) << value << " = ";

    // Display bits
    for ( unsigned i = 1; i <= SHIFT; ++i )
    { // The & is Bitwise Operator AND, not a reference!
        cout << ( value & MASK ? '1' : '0' );
        value <<= 1; // Shift value left by 1
        // Use % to check if they are divisible
        if ( i % 8 == 0 ) // Output a space after 8 bits
            cout << ' ';
    } // End for

    cout << endl;
} // End function displayBits