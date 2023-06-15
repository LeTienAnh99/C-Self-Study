// Figure 14.1: fig14_01.cpp - Function template printArray
// Usings function template specializations
#include <iostream>
using namespace std;

// Define function template printArray 
template< typename T >
void printArray( const T * const array, int count )
{
    for ( int i = 0; i < count; ++i )
        cout << array[ i ] << " ";

    cout << endl;
} // End function template printArray

int main()
{
    const int aCount = 5; // Size of array a
    const int bCount = 7; // Size of array b
    const int cCount = 6; // Size of array c

    int a[ aCount ] = { 1, 2, 3, 4, 5 };
    double b[ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
    char c[ cCount ] = "HELLO"; // 6th position for null

    cout << "Array a contains:" << endl;

    // Call integer function-template specialization
    printArray( a, aCount );

    cout << "Array b contains:" << endl;

    // Call double function-template specialization
    printArray( b, bCount );

    cout << "Array c contains:" << endl;

    // Call character function-template spcialization
    printArray( c, cCount );
} // End main
