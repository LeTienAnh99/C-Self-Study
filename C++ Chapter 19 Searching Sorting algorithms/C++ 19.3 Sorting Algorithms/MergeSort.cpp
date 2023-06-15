// Figure 19.6: MergeSort.cpp
// Class MergeSort member-function definitions
// https://blog.luyencode.net/thuat-toan-sap-xep-merge-sort/ <- Check this link for an array version
#include <iostream>
#include <vector>
#include <cstdlib> // Prototype for functions srand and rand
#include <ctime> // Prototype for function time
#include "MergeSort.h"
using namespace std;
// Constructor fill vector with random integers
MergeSort::MergeSort( int vectorSize )
{
    size = ( vectorSize > 0 ? vectorSize : 10 ); // Validate vectorSize
    srand( time( 0 ) ); // Seed random number generator using current time

    // Fill vector with random ints in range 10-99
    for ( int i = 0; i < size; ++i )
        data.push_back( 10 + rand() % 90 );
} // End MergeSort constructor

// Split vector, sort subvectors and merge subvectors into sorted vector
void MergeSort::sort()
{
    sortSubVector( 0, size - 1 ); // Recursively sort entire vector
} // End function sort

// Recursive function to sort subvectors
void MergeSort::sortSubVector( int low, int high )
{
    // Test base case; size of vector equals 1
    if ( ( high - low ) >= 1 ) // If not the base case
    {
        int middle1 = ( low + high ) / 2; // Calculate the middle of vector
        int middle2 = middle1 + 1; // Calculate next element over; middle2 is the starting elemetns of sub array 2

        // Output split step
        cout << "Split: ";
        displaySubVector( low, high );
        cout << endl << "     ";
        displaySubVector( low, middle1 );
        cout << endl << "     ";
        displaySubVector( middle2, high );
        cout << endl << endl;

        // Split vector in half; sort each half (recursive calls)
        sortSubVector( low, middle1 ); // First half of vector
        sortSubVector( middle2, high ); // Second half of vector

        // Merge two sorted vectors after split calls return
        merge( low, middle1, middle2, high );
    } // End if
} // End function sortSubVector

// Merge two sorted subvectors into one sorted subvector
void MergeSort::merge( int left, int middle1, int middle2, int right )
{
    int leftIndex = left; // Index into left subvector
    int rightIndex = middle2; // Index into right subvector
    int combinedIndex = left; // Index into temporary working vector
    vector< int > combined( size ); // Working vector; combined() là 1 object của class <vector>; size is a private data member

    // Output two subvectors before merging
    cout << "Merge:   ";
    displaySubVector( left, middle1 );
    cout << endl << "       ";
    displaySubVector( middle2, right );
    cout << endl;

    // Merge vectors until reaching end of either
    while ( leftIndex <= middle1 && rightIndex <= right ) // while (i < n1 && j < n2)
    {
        // Place smaller of two curent elements into result
        // and move to next space in vector
        if ( data[ leftIndex ] <= data[ rightIndex ] ) // data is a vector
            combined[ combinedIndex++ ] = data[ leftIndex++ ];
        else 
            combined[ combinedIndex++ ] = data[ rightIndex++ ];
    } // End while

    if ( leftIndex == middle2 ) // If at end of left vector
    {
        while ( rightIndex <= right ) // Copy in rest of right vector
            combined[ combinedIndex++ ] = data[ rightIndex++ ];
    } // End if
    else // At end if right vector
    {
        while ( leftIndex <= middle1 ) // Copy in rest of left vector
            combined[ combinedIndex++ ] = data[ leftIndex++ ];
    } // End else

    // Copy values back into original vector
    for ( int i = left; i <= right; ++i )
        data[ i ] = combined[ i ];

    // Output merged vector
    cout << "       ";
    displaySubVector( left, right );
    cout << endl << endl;
} // End function merge

// Display elements in vector
void MergeSort::displayElements() const
{
    displaySubVector( 0, size - 1 );
} // End function displayElements

// Display certain values in vector
void MergeSort::displaySubVector( int low, int high ) const
{
    // Output spaces for alignment
    for ( int i = 0; i < low; ++i )
        cout << "   ";

    // Output elements left in vector
    for ( int i = low; i <= high; ++i )
        cout << " " << data[ i ];
} // End function displaySubVector