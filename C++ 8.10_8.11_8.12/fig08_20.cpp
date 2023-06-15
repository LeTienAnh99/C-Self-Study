// Figure 8.20: fig08_20.cpp
// Multipurpose sorting program using function pointers
#include <iostream>
#include <iomanip>
using namespace std;

// Declare all the function prototypes
void selectionSort( int [], const int, bool (*)( int, int ) ); // Receive a pointer to a function as an argument
void swap( int * const, int * const );
bool ascending( int, int ); // Implements ascending order
bool descending( int, int ); // Implements descending order

int main()
{
    const int arraySize = 10;
    int order; // 1 = ascending, 2 = descending
    int counter; // Array index
    int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 45, 37 };

    cout << "Enter 1 to sort in ascending order, \n"
        << "Enter 2 to sort in descending order: ";
    cin >> order;
    cout << "\nData items in original order\n";

    // Output original array
    for ( counter = 0; counter < arraySize; ++counter )
        cout << setw( 4 ) << a[ counter ];

    // Sort array in ascending order ; pass function ascending
    // as an argument to specify ascending sorting order
    if ( order == 1 )
    {
        selectionSort( a, arraySize, ascending );
        cout << "\nData items in ascending order\n";
    } // End if

    // Sort array in descending order; pass function descending
    // as an argument to specify descending sorting order
    else
    {
        selectionSort( a, arraySize, descending );
        cout << "\nData items in descending order\n";
    } // End else part of if...else

    // Output sorted array
    for ( counter = 0; counter < arraySize; ++counter )
        cout << setw( 4 ) << a[ counter ];

    cout << endl;
} // End main

// Multipurpose selection sort; the parameter compare is a pointer to
// the comparison function that determines the sorting order
void selectionSort( int work[], const int size,
                    bool (*compare)( int ,int ) )
{
    int smallestOrLargest; // Index of smallest (or largest) element

    // Loop over size - 1 elements
    for ( int i = 0; i < size - 1; ++i )
    {
        smallestOrLargest = i; // First index of remaining vector

        // Loop to find index of smallest (or largest) element
        for ( int index = i + 1; index < size; ++index )
            if ( !(*compare)( work[ smallestOrLargest], work[ index ] ) )
                smallestOrLargest = index;

        swap( &work[ smallestOrLargest ], &work[ i ] );
    } // End if
} // End function selectionSort

void swap( int * const element1Ptr, int * const element2Ptr )
{
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
} // End function swap

// Determine whether element a is less than
// element b for an ascending order sort
bool ascending( int a, int b )
{
    return a < b; // Returns true if a is less than b
} // End function ascending

// Determine whether element a is greater than
// element b for a descending order sort
bool descending( int a, int b )
{
    return a > b; // Returns true if a is greater than b
} // End function descending







