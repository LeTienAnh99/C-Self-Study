// Figure 8.13: fig08_13.cpp
// Selection sort with pass-by-reference. This program puts values into an
// array, sorts them into ascending order and prints the resulting array
#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort( int * const, const int ); // Function prototype
void swap( int * const, int * const ); // Function prototype

int main()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 56, 6, 2, 8, 10, 12, 89, 45, 37 };

    cout << "Data items in original order\n";

    for ( int i = 0; i < arraySize; ++i )
        cout << setw( 4 ) << a[ i ];

    selectionSort( a, arraySize ); // Sort the array

    cout << "\nData items in ascending order\n";

    for ( int j = 0; j < arraySize; ++j )
        cout << setw( 4 ) << a[ j ];

    cout << endl;
} // End main

// Function to sort an array; contains 2 parameters, array name and array size
void selectionSort( int * const array, const int size )
{
    int smallest; // Index of smallest element

    // Loop over size - 1 elements
    for ( int i = 0; i < size - 1; ++i )
    {
        smallest = i; // First index of remaining array

        // Loop to find index of smallest element; // { 56, 6, 2, 8, 10, 12, 89, 45, 37 };
        for ( int index = i + 1; index < size; ++index )

            if ( array[ index ] < array[ smallest ] )
                smallest = index;
        // pass địa chỉ vì không cho phép pass thẳng array element từ hàm vào, do đó phải dùng pointer + address
        swap( &array[ i ], &array[ smallest ] );
    } // End if
} // End function selectionSort()

// Swap values at memory locations to which
// element1Ptr and element2Ptr point
void swap( int * const element1Ptr, int * const element2Ptr )
{
    int hold = *element1Ptr; // The (*) here means dereference. Because the addresss is passed to the function, so we use dereference to access the value store in that address
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
} // End function swap
