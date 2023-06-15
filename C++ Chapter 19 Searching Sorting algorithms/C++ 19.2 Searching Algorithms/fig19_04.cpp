// Figure 19.4: fig19_04.cpp
// BinarySearch test program
#include <iostream>
#include "BinarySearch.h"
using namespace std;

int main()
{
    int searchInt; // Search key
    int position; // Location of search key in vector

    // Create vector and output it
    BinarySearch searchVector ( 15 );
    searchVector.displayElements();

    // get input from user
    cout << "\nPlease enter an integer value (-1 to quit): ";
    cin >> searchInt; // Read an int from user
    cout << endl;

    // Repeatedly input an integer; -1 terminates the program
    while ( searchInt != -1 ) 
    {
        // Use binary search to try to find integer 
        position = searchVector.binarySearch( searchInt );

        // Return value of -1 indicates integer was not found
        if ( position == -1 )
            cout << "The integer " << searchInt << " was not found.\n";
        else 
            cout << "The integer " << searchInt
                << " was found in position " << position << ".\n";

        // Get input from user
        cout << "\n\nPlease enter an integer value (-1 to quit): ";
        cin >> searchInt; // Read an int from user
        cout << endl;
    } // End while
} // End main