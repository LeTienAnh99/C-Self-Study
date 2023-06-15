// Bubble Sort algorithm
#include <iostream>
#include <iomanip>
using namespace std;

const int arraySize = 10;

void printArray( int arr[], int size )
{
    for ( int i = 0; i < size; ++i )
        cout << arr[ i ] << setw( 3 );
} // End function printArray()

void bubbleSort( int arr[], int size )
{
    int pos, current;
    bool isSwap = false; // Default is false

    for ( int i = 0; i < size - 1; ++i )
    {
        for ( int j = 0; j < size - 1; ++j )
        {
            current = arr[ j ]; // Save the current element
            pos = j; // Save the current index
            if ( arr[ j ] > arr[ j + 1 ] )
            {
                arr[ j ] = arr[ j + 1 ];
                j = j + 1;
                isSwap = true;
            } // End if statement
            
            arr[ j ] = current; // j lúc này đã là j+1 rồi
            if ( isSwap == false )
                break; // Break the for loop
        } // End inner for
    } // End outer for
} // End function bubbleSort()

int main()
{
    int a[ arraySize] = { 5, 2, 1, 7, 39, 13, 22, 17, 8, 40 };

    cout << "Original array: " << endl;
    printArray( a, arraySize );

    cout << "\nSorted array: " << endl;
    bubbleSort( a, arraySize );
    printArray( a, arraySize );
}