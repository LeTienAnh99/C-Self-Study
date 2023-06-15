// Exercsise 7.11a + 7.12 // Bubble Sort Enhanced
// Bubble sort using defined function
#include <iostream>
#include <iomanip>
using namespace std;
const int arraySize = 10;

void bubbleSort( int [], int ); // Function prototype for bubbleSort
void displayArr( int [], int ); // Function prototype for displaying array,
int main()                     // declares array and its size
{
    const int arraySize = 10;
    int a[ arraySize ] = { 3, 2, 6, 5, 25, 77, 20, 33, 7, 46 };

    cout << "Bubble sort demonstration" << endl;
    cout << "Unsorted array: " << endl;
    displayArr( a, arraySize); // Call function displayArr() to display the array a[]
    cout << endl;

    cout << "\nSorted array with Bubble sort algorithm:" << endl;
    bubbleSort( a, arraySize );
    displayArr( a, arraySize );
    cout << endl;
} // End function main

void displayArr( int arr[], int arrSize )
{
    for ( int k = 0; k < arrSize; ++k )
        cout << arr[ k ] << setw( 3 );
} // End function displayArr()

void bubbleSort( int arr[], int arrSize )
{
    int i, j; // Loop variable
    int temp; // Temporary variable to store current value
    int pos; // Temporary variable to store current index
    bool isSwap = false; // Boolean variable to check if swap or not, to skip the loop when needed
    for ( i = 0; i < arrSize - 1 ; ++i )
    {
        for ( int j = 0; j < arrSize - 1 ; ++j )
        {
            temp = arr[ j ];
            pos = j;
            if ( arr[ j ] > arr[ j + 1 ] ) {
                arr[ j ] = arr[ j + 1 ];
                j = j + 1;
                isSwap = true; // Ktra lần lặp này có swap k. Nếu block if này xảy ra(hoàn thành swap) thì isSwap = true. Còn k thì isSwap vẫn là false (tức là quá trình swap k diễn ra, e.g dãy đã dc dc sắp xếp sẵn r)
            } // End if statement
            // Nếu để a[pos] = temp, sẽ output ra la 0, 2, 3,...,46; mat 77, y như đoạn if comment ở dưới
            arr[ j ] = temp; // Output thứ tự chính xác
        } // End inner for
        if ( isSwap = false ) {
            break;
        }
    //** With the swap check and the term "- 1"
    // in i, j loop, the program is faster: 0.030s vs 0.033s
    } // End outer for
} // End function bubbleSort()
