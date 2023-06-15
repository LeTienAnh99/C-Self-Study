// Selection Sort algorithm
// repeatedly selecting the smallest (or largest) element from the unsorted portion of the list 
// and moving it to the sorted portion of the list. 
#include <iostream>
#include <iomanip>
using namespace std;

void change( int * const element1Ptr, int * const element2Ptr ) // elementPtr1 is a const pointer an int
{
    int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp;
} // End function swap()

void selectionSort( int * const arr, const int size )
{
    int smallest; 

    for ( int i = 0; i < size - 1; ++i )
    {
        smallest = i;
        // The following for loop will find the real smallest element.
        for ( int index = i + 1; index < size; ++index ) { // NẾU DÙNG j = 1 THÌ SAO?
            if ( arr[ index ] < arr[ smallest ] )
                smallest = index;
        } // End inner for
        change( &arr[ i ], &arr[ smallest ] );
    } // End outer for
} // End function selectionSort()

void printArray( int arr[], int size )
{
    for ( int i = 0; i < size; ++i )
        cout << setw( 3 ) << arr[ i ];
} // End function printArray()

int main()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 5, 1, 10, 15, 28, 13, 75, 50, 47, 40 };
    cout << "Original array: " << endl;
    printArray( a, arraySize );

    cout << "\nSorted array: " << endl;
    selectionSort( a, arraySize );
    printArray( a, arraySize );
}