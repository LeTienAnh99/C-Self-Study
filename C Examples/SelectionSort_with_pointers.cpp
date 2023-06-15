// Figure 8.20: fig08_20.cpp
// Multipurpose sorting program using function pointers
// Hàm selectionSort chạy theo 2 mode, nếu là mode ascending, thì chạy theo mode ascending, nếu a < b (TRUE) thì swap
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void selectionSort( int [], const int, bool (*)( int, int ) );
void swap( int * const, int * const );
bool ascending( int, int ); // Implements ascending order
bool descending( int, int ); // Implements descending order
void printArray( int [], const int size );

/* Multipurpose selection sort; the parameter compare is a pointer to 
the comparision funtion that determines the sorting order */
void selectionSort( int work[], const int size,
                    bool (*compare)( int, int ) )
{
    int smallestOrLargest; // Index of smallest (or largest element)

    // Loop over size - 1 elements
    for ( int i = 0; i < size - 1; ++i )
    {
        smallestOrLargest = i; // First index of remaining vector

        // Loop to find index of smallest (or largest) element
        for ( int index = i + 1; index < size; ++index ) {                 // Ví dụ: chạy mode ascending:
            if ( !(*compare)( work[ smallestOrLargest ], work[ index ] ) ) // Nếu a < b (tức là TRUE) thì k swap (do là !( *compare ) mang nghĩa đối nghịch)
                smallestOrLargest = index;                                 // nếu a > b (FALSE) swap        
        } // End inner for
        swap( &work[ smallestOrLargest ], &work[ i ] );
    } // End outer for
} // End function selectionSort

// Swap values at memory locations to which
// element1Ptr and element2Ptr point
void swap( int * const element1Ptr, int * const element2Ptr )
{
    int hold = *element1Ptr; // Assign value at element1Ptr(dereference) to hold
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
} // End function swap

// Determine whether element a is less than 
// element b for an ascending order sort
bool ascending( int a, int b )
{
    return a < b; // Returns TRUE if a is less than b
} // End function ascending

// Determine whether element a is greater than
// element b for a descending order sort
bool descending( int a, int b )
{
    return a > b; // Returns TRUE if a is greater than b
} // End function descending

// Function to print array
void printArray( int work[], const int size )
{
    for ( int i = 0; i < size; ++i )
    {
        cout << setw( 4 ) << work[ i ]; 
    } // End for
} // End function printArray

int main()
{
    const int arraySize = 10;
    int order; // 1 = ascending, 2 = desceding
    int counter; // Array index
    int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Enter 1 to sort in ascending order,\n"
        << "Enter 2 to sort in descejding order: ";
    cin >> order;
    cout << "\nData items in original order\n";

    // Output original array
    printArray( a, arraySize );
    
    // Sort array in ascending order; pass function ascending
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
    printArray( a, arraySize );

    cout << endl;
} // End main