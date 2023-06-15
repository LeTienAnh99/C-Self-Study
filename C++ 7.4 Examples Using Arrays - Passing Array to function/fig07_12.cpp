// Figure 7.12: fig07_12.cpp // Static Local Arrays and Automatic Local Arrays
// Static arrays are initialized to 0
#include<iostream>
using namespace std;

void staticArrayInit( void ); // Function prototype
void automaticArrayInit( void ); // Function prototype
const int arraySize = 3;

int main()
{
    cout << "First call to each function:\n";
    staticArrayInit();
    automaticArrayInit();

    cout << "\n\nSecond call to each function:\n";
    staticArrayInit();
    automaticArrayInit();
    cout << endl;
} // End main

// Function declaration to demonstrate a static local array
void staticArrayInit( void )
{
    // Initializes elements to 0 first time function is called
    static int array1[ arraySize ]; // Static local array

    cout << "\nValues on entering staticArrayInit:\n";

    // Output contents of array1
    for ( int i = 0; i < arraySize; ++i )
        cout << "array1[" << i << "] = " << array1[ i ] << " ";

    cout << "\nValues on exiting staticArrayInit:\n";

    // Modify and output contents of array1
    for ( int j = 0; j < arraySize; ++j )
        cout << "array1[" << j << "] = " << ( array1[ j ] += 5 ) << " ";
} // End function staticArrayInit

// Function to demonstrate an automatic local array
void automaticArrayInit( void )
{
    // Initializes elements each time function is called
    int array2[ arraySize ] = { 1, 2, 3 }; // Automatic local array

    cout << "\n\nValues on entering automaticArrayInit:\n";

    // Output contents of array2
    for ( int i = 0; i < arraySize; ++i )
        cout << "array2[" << i << "] = " << array2[ i ] << " ";

    cout << "\nValues on exiting automaticArrayInit:\n";

    // Modify and output contents of array2
    for ( int j = 0; j < arraySize; ++j )
        cout << "array2[" << j << "] = " << ( array2[ j ] += 5 ) << " ";
} // End function automaticArrayInit
