// Quick Sort algorithm
#include <iostream>
#include <iomanip>
using namespace std;

// Hàm partition: Chọn pivot, sắp xếp và tách mảng thành 2 mảng con, vs mảng con 1 là các phần tử bé hơn pivot
// mảng con 2 là các phần tử lớn hơn pivot, đệ quy để tiếp tục tách cho tới khi các phần tử dc sắp xếp.
int partition( int arr[], int left, int right )
{
    // left: phần tử ngoài cùng bên trái; right: phần tử cuối cùng bên phải
    int pivot = arr[ right ]; // Chọn pivot là phần tử right
    int i = left - 1; // i là index; left - 1 (0 - 1) nghĩa là i đang ở vị trí -1
    // j là index
    for ( int j = left; j < right; ++j )
    {
        if ( arr[ j ] <= pivot )
        {
            ++i;
            swap( arr[ i ], arr[ j ] ); 
        } // End if
    } // End for
    // After the above for, we need the pivot to be swapped one more time to get to the middle of the array
    // Move pivot to the middle:
    ++i;
    swap( arr[ i ], arr[ right ] );
    return i; // Trả về vị trí của pivot (lúc này đã nằm ở giữa)
} // End function partition

void quickSort( int arr[], int left, int right )
{
    // Check base case: left >= right (tức cả 2 mảng chỉ còn 1 phần tử duy nhất) thì dừng recursion.
    if ( left >= right )
        return;
    int p = partition( arr, left, right ); // Gọi hàm partition để tách original array thành 2 nửa, sau đó:
    quickSort( arr, left, p - 1 );
    quickSort( arr, p + 1, right );
} // End function quickSort

void swap( int element1, int element2 )
{
    int temp = element1;
    element1 = element2;
    element2 = temp;
} // End function swap

void printArray( int arr[], int size )
{
    for ( int i = 0; i < size; ++i )
        cout << setw( 4 ) << arr[ i ]; 
} // End function printArray

int main()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 32, 15, 2, 5, 1, 77, 23, 16, 42, 4 };
    
    int l = 0; // left is index 0 of array a[]
    int r = 9; // right is index 0 of array a[]

    cout << "Original array: " << endl;
    printArray( a, arraySize );

    cout << "\nSorted array: " << endl;
    quickSort( a, l, r );
    printArray( a, arraySize );
}