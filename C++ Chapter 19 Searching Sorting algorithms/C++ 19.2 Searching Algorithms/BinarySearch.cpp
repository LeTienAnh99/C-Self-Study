// Figure 19.3: BinarySearch.cpp
// BinarySeach class member-function definition
#include <iostream>
#include "BinarySearch.h"
#include <cstdlib>
#include <algorithm> // Prototype for sort function
#include <ctime> // Prototype for function time
using namespace std;

// Constructor initializes vector with random ints and sorts the vector
BinarySearch::BinarySearch( int vectorSize )
{
    size = ( vectorSize > 0 ? vectorSize : 10 ); // Validate vectorSize
    srand( time( 0 ) ); // Seed using current time

    // Fill vector with random ints in range 10-99
    for ( int i = 0; i < size; ++i )
        data.push_back( 10 + rand() % 90 ); // 10-99

    sort( data.begin(), data.end() ); // Sort the data
} // End BinarySearch constructor

// Perform a binary search on the data
int BinarySearch::binarySearch( int searchElement ) const
{
    int low = 0; // Low end of the search area
    int high = size - 1; // High end of the search area
    int middle = ( low + high + 1 ) / 2; // Middle element
    int location = -1; // Return value; -1 if not found

    do // Loop to search for element
    {
        // Print remaining elements of vector to be searched
        displaySubElements( low, high );

        // Output spaces for alignment
        for ( int i = 0; i < middle; ++i )
            cout << "  ";
        
        cout << " * " << endl; // Indicate current middle

        // If the element is found at the middle
        if ( searchElement == data[ middle ] )
            location = middle; // Location is the current middle
        else if ( searchElement < data[ middle ] ) // Middle is too high
            high = middle - 1; // Eliminate the higher half
        else // Middle element is too low
            low = middle + 1; // Eliminate the lower half
        
        middle = ( low + high + 1 ) / 2; // Recalculate the middle
    } while ( ( low <= high ) && ( location == -1 ) );

    return location; // Return location of search key
} // End function binarySearch

// Display values in vector
void BinarySearch::displayElements() const
{
    displaySubElements( 0, size - 1 );
} // End function displayElements

// Display certain values in vector
void BinarySearch::displaySubElements( int low, int high ) const
{
    for ( int i = 0; i < low; ++i ) // Output spaces for alighment
        cout << "  ";
    
    for ( int i = low; i <= high; ++i ) // Output elements left in vector
        cout << data[ i ] << " ";

    cout << endl;
} // End function displaySubElements