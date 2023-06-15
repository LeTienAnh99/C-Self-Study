// Figure 16.8: Integer.cpp
// Integer member function definitions.
#include <iostream>
#include "Integer.h"
using namespace std;

// Integer default constructor
Integer::Integer( int i ) : value( i )
{
    cout << "Constructor for Integer " << value << endl;
} // End Integer constructor

// Integer destructor
Integer::~Integer()
{
    cout << "Destructor for Integer " << value << endl;
} // End Integer destructor

// Set Integer value
void Integer::setInteger( int i )
{
    value = i;
} // End function setInteger

// Function to return Integer value
int Integer::getInteger() const
{
    return value;
} // End function getInteger