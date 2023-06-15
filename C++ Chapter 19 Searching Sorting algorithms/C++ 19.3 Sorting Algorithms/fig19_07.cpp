// Figure 19.7: fig19_07.cpp
// MergeSort test program
#include <iostream>
#include "MergeSort.h"
using namespace std;

int main()
{
    // Create object to perfrom merge sort
    MergeSort sortVector( 10 );

    cout << "Unsorted vector:" << endl;
    sortVector.displayElements(); // Print unsorted vector
    cout << endl << endl;

    sortVector.sort(); // Sort vector

    cout << "Sorted vector:" << endl;
    sortVector.displayElements(); // Print sorted vector
    cout << endl;
} // End main