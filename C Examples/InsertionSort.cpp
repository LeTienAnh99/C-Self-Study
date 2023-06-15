// Insertion Sort algorithm
// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.
// The array is virtually split into a sorted and an unsorted part.
// Values from the unsorted part are picked and placed at the correct position in the sorted part.
#include <iostream>
using namespace std;

void insertionSort( int arr[], int size )
{
    // Loop over the element
    int current, temp, index;
    for ( index = 1; index <= size; ++index )
    {
        current = arr[ index ];
        temp = index; // temp lưu current index

        while ( ( temp > 0 ) && arr[ temp - 1 ] > current )
        {
            arr[ temp ] = arr[ temp - 1 ]; // Assign arr[sau] vào arr[trước]
            temp--; // giảm index để tiếp tục điều kiện while tới khi phần tử thật sự dc xếp về đầu array
            cout << "\n temp after temp-- is: " << temp << endl;
        } // End while

        arr[ temp ] = current;
        cout << "temp after went out of while loop is: " << temp << endl;
    } // End for
} // End function insertionSort()

void printArray( int arr[], int size )
{
    for ( int i = 0; i <= size; ++i )
        cout << arr[ i ] << " ";
} // End function printArray()

int main()
{
    const int arraySize = 10;
    int data[ arraySize ] = { 15, 10, 30, 23, 22, 7, 5, 11, 44, 50 };

    cout << "Unsorted array: " << endl;
    printArray( data, arraySize );
    insertionSort( data, arraySize );

    cout << "\nSorted array: " << endl;
    printArray( data, arraySize );
}