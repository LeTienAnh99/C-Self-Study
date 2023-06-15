// Figure 7.13: fig07_13.cpp / Passing array to function
// Passing an entire array and passing an array element.
#include<iostream>
#include<iomanip>
using namespace std;

void modifyArray( int [], int ); // Function prototype, declaring array and its size
void modifyElement( int ); // Function prototype. Receive array element value

int main()
{
    const int arraySize = 5; // Size of array a
    int a[ arraySize ] = {0, 1, 2, 3, 4}; // Initialize array a with 5 elements

    cout << "Effects of passing entire array by reference:"
        << "\nThe values of the original array are:\n";

    // Output original array elements
    for ( int i = 0; i < arraySize; i++ )
        cout << setw( 3 ) << a[ i ];

    cout << endl;

    // Pass array a to modifyArray by reference
    modifyArray( a, arraySize );
    cout << "The values of modified array are:\n";

    // Output modified array elements
    for ( int j = 0; j < arraySize; ++i )
        cout << setw( 3 ) << a[ j ];

    cout << "\n\nEffects of passing array element by value:"
        << "\na[3] before modifyElement: " << a[ 3 ] << endl;

    modifyElement( a[ 3 ] ); // Pass array element a[3] by value
    cout << "a[3] after modifyElement: " << a[ 3 ] << endl;
} // End main

// In function modifyArray, "b" points to the original array "a" in memory
void modifyArray( int b[], int sizeOfArray )
{
    // Multiply each array element by 2
    for ( int k = 0; k < sizeOfArray; ++k )
        b[ k ] *= 2;
} // End function modifyArray

// In function modifyElement, "e" is a local copy of
// array element a[ 3 ] passed from main, i.e a[3] = e
void modifyElement( int e )
{
    // Multiply parameter by 2
    cout << "Value of element in modifyElement: " << ( e *= 2 ) << endl;
} // End function modifyElement
