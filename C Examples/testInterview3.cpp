// Sum of all elements in an array
#include <iostream>
#include <iomanip>
using namespace std;

int sum( int arr[], const int ); // Function prototype

int main()
{
    const int arraySize = 10;
    int a[ arraySize ] = { 2, 4, 5, 8, 1, 10, 15, 32, 12, 21 };

    cout << "Sum of all the element in the array is: " << sum( a, arraySize );
} // End main

int sum( int arr[], const int size )
{
    int total = 0;
    for ( int i = 0; i < size; ++i )
    {
        total = total + arr[ i ];
    } // End for
    return total;
} // End function sum