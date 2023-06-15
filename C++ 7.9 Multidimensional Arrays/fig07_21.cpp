// Figure 7.12: fig07_21.cpp
// Initialize multidimensional arrays
#include <iostream>
using namespace std;

void printArray( const int [][ 3 ] ); // Function prototype, 2D array with 3 columns
const int rows = 2; // Global variable
const int columns = 3; // Global variable

int main()
{
    int array1[ rows ][ columns ] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int array2[ rows ][ columns ] = { 1, 2, 3, 4, 5 };
    int array3[ rows ][ columns ] = { { 1, 2 }, {4} };

    cout << "Values in array1 by row are:" << endl;
    printArray( array1 );

    cout << "Values in array2 by row are:" << endl;
    printArray( array2 );

    cout << "Values in array3 by row are:" << endl;
    printArray( array3 );
} // End main

// Function declaration, output array with two rows and three columns
void printArray( const int a[][ columns ] )
{
    // Loop through array's rows
    for ( int i = 0; i < rows; ++i )
    {
        // Loop through columns of current row
        for ( int j = 0; j < columns; ++j )
        {
            cout << a[i][j] << ' ';
        }
        cout << endl; // Start new line of output
    } // End outer for
} // End function printArray()
