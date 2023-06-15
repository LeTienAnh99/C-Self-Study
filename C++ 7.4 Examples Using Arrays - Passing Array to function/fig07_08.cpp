// Figure 7.8: fig07_08.cpp
// Compute the sum of the elements of the array
#include<iostream>
using namespace std;

int main()
{
    const int arraySize = 10; // Constant variable indicating array size
    int a[ arraySize ] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
    int total = 0;

    // Sum contents of array a
    for ( int i = 0; i < arraySize; ++i )
        total += a[ i ];

    cout << "Total of array elements: " << total << endl;
} // End main
