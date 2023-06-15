// Figure 10.5: Increment.cpp
// Member-function definitions for class Increment demonstrate using a 
// member initializer to initialize a constant of a built-in data type.
#include <iostream>
#include "Increment.h" // Include definition of class Increment
using namespace std;

// Constructor
Increment::Increment( int c, int i )
    : count( c ), // Initializer for non-const member
      increment( i ) // Required initializer for const member
{
    // Empty body
} // End constructor Increment

// Print count and increment values
void Increment::print() const
{
    cout << "count = " << count << ", increment = " << increment << endl;
} // End function print