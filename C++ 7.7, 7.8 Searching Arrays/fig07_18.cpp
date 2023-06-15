// Figure 7.18: fig07_18.cpp
// Searching Arrays with Linear Search
#include <iostream>
using namespace std;

int linearSearch( const int [], int, int ); // Function prototype

int main()
{
    const int arraySize = 100; // Size of array
    int a[ arraySize ]; // Create array a
    int searchKey; // Value to locate in array a

    for ( int i = 0; i < arraySize; ++i ) {
        a[ i ] = 2 * i; // Create some data
    }
    cout << "Enter integer search key: ";
    cin >> searchKey;

    // Attempt to locate searchKey in array a
    int element = linearSearch( a, searchKey, arraySize );

    // Display results
    if ( element != -1 )
        cout << "Found value in element " << element << endl;
    else
        cout << "Value not found!" << endl;
} // End main

// Compare key to every element of array until location is
// found or until the end of array is reached; return subscript of
// the element if key is found, or -1 if key not found
int linearSearch( const int array[], int key, int sizeOfArray )
{
    for ( int j = 0; j < sizeOfArray; ++j )
    {
        if ( array[ j ] == key ) // If element match the key
            return j; // return the location of key
    }
    return -1; // Key not found
} // End function linearSearch
