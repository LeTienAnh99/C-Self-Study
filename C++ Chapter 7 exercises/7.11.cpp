// Exercise 7.11
// Bubble sort Algorithm
#include<iostream>
#include<iomanip>
using namespace std;
const int arraySize = 10;
int a[ arraySize ] = { 3, 2, 6, 5, 25, 10, 15, 30, 77, 46 };
int temp; // Temporary variable to store current value
int pos; // Temporary variable to store current index
int main()
{
    cout << "Bubble sort demonstration" << endl;
    cout << "Unsorted array: " << endl;
    for ( int i = 0; i < arraySize; ++i ) {
        cout << a[ i ] << setw( 3 );
    }
    cout << "\nSorted array with Bubble sort algorithm:" << endl;

    // Inner loop is for sorting.
    // Outer loop is for checking again after the 1st loop.
    // Outer loop stops when all numbers are sorted.
    for ( int i = 0; i < arraySize; ++i )
    {
        for ( int j = 0; j < arraySize - 1 ; ++j )
        {
            temp = a[j];
            pos = j;
            if ( a[j] > a[j+1] ) {
                a[j] = a[j+1];
                j = j + 1;
            }
            // Nếu để a[pos] = temp, sẽ output ra la 0, 2, 3,...,46; mat 77, y như đoạn if comment ở dưới
             a[j] = temp; // Output thứ tự chính xác

         //   if ( temp > a[pos+1] ) {
           //     a[pos] = a[pos+1];
             //   pos = pos + 1;
            //}
           // a[pos] = temp;
        }
    }
    for ( int i = 0; i < arraySize; ++i ){
        cout << a[i] << setw(3); }
}
