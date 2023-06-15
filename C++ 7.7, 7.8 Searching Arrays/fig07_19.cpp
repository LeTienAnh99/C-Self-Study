//Figure 7.19: fig07_19.cpp - INSERTION SORT
// This program sorts an array's values into ASCENDING order
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int arraySize = 10; // Declare size of array = 10
    int data[ arraySize ] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
    int insert; // Temporary variable to hold element to insert

    cout << "Unsorted array:\n";

    // Output original array
    for ( int i = 0; i < arraySize; ++i ) {
        cout << setw( 4 ) << data[ i ];
    }
    // Insertion sort
    // Loop over the elements of the array
    for ( int next = 1; next < arraySize; ++next )
    {
        insert = data[ next ]; // Store the value in the current element

        int moveItem = next; // Initialize location to place element

        // Search for the location in which to put the current element
        // The while loop is for sorting the number til it reaches the beginning of the arrays,
        // i.e: value 4, position 2, keep moving it to the left til 4 is placed at position 0
        while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
        {
            // Shift element one slot to the right
            data[ moveItem ] = data[ moveItem - 1 ];
            moveItem--;
        } // End while

        data[ moveItem ] = insert; // Place inserted element into the array
    } // End for

    cout << "\nSorted array:\n";

    // Output sorted array
    for ( int i = 0; i < arraySize; ++i ) {
        cout << setw( 4 ) << data[ i ];
    }
    cout << endl;
} // End main
