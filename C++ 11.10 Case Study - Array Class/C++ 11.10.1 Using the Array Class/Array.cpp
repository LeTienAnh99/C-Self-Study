// Figure 11.11: Array.cpp
// Array class member- and friend function definitions
#include <iostream>
#include <iomanip>
#include <cstdlib> // Exit function prototype
#include "Array.h" // Array class definition
using namespace std;

// Default constructor for class Array (default size 10)
Array::Array( int arraySize )
{
    // Validate arraySize
    if ( arraySize > 0 )
        size = arraySize;
    else 
        throw invalid_argument( "Array size must be greater than 0" );
    
    ptr = new int[ size ]; // Create space for pointer-based element

    for ( int i = 0; i < size; ++i )
        ptr[ i ] = 0; // Set pointer-based array element
} // End Array default constructor

// Copy constructor for class Array;
// Must receive a reference to prevent infinite recursion
Array::Array( const Array &arrayToCopy )
    : size( arrayToCopy.size )
{
    ptr = new int[ size ]; // Create space for pointer-based array

    for ( int i = 0; i < size; ++i )
        ptr[ i ] = arrayToCopy.ptr[ i ]; // Copy into object
} // End Array copy constructor

// Destructor for class Array
Array::~Array()
{
    delete [] ptr; // Release pointer-based array space
} // End destructor

// Return number of elements of Array
int Array::getSize() const 
{
    return size; // Number of elements in Array
} // End function getSize

// Overloaded assignment operator;
// Const return avoids: ( a1 = a2 ) = a3
const Array &Array::operator=( const Array &right )
{
    if ( &right != this ) // Avoid self-assignment
    {
        // For Arrays of different sizes, deallocate original
        // left-side array, then allocate new left-side array
        if ( size != right.size )
        {
            delete [] ptr; // Release space
            size = right.size; // resize this object
            ptr = new int[ size ]; // Create space for array copy
        } // End inner if

        for ( int i = 0; i < size; ++i )
            ptr[ i ] = right.ptr[ i ]; // Copy array into object
    } // End outer if 

    return *this; // Enables x = y = z, for example
} // End function operator=

// Determine if two Arrays are equal and
// return true, otherwise return false 
bool Array::operator==( const Array &right ) const
{
    if ( size != right.size )
        return false; // Arrays of differnent number of elements

    for ( int i = 0; i < size; ++i )
        if ( ptr[ i ] != right.ptr[ i ] )
            return false; // Array contents are not equal
    
    return true; // Arrays are equal
} // End function operator==

// Overloaded subscript operator for non-const Arrays;
// Reference return creates a modifiable lvalue
int &Array::operator[]( int subscript )
{
    // Check for subscript out-of-range error
    if ( subscript < 0 || subscript >= size )
        throw out_of_range( "Subscript out of range" );
    
    return ptr[ subscript ]; // Reference return
} // End function operator[]

// Overloaded subsscript oeprator for const Arrays
// Const reference return creates an rvalue
int Array::operator[]( int subscript ) const 
{
    // Check for subscript out-of-range error
    if ( subscript < 0 || subscript >= size )
        throw out_of_range( "Subscript out of range" );
    
    return ptr[ subscript ]; // Returns COPY of this element
} // End function operator[]

// Overloaded input operator for class Array;
// Inputs values for entire Array
istream &operator>>( istream &input, Array &a )
{
    for ( int i = 0; i < a.size; ++i )
        input >> a.ptr[ i ];

    return input; // Enables cin >> x >> y;
} // End function

// Overloaded ouput operator for class Array
ostream &operator<<( ostream &output, const Array &a )
{
    int i;

    // Output private ptr-based array
    for ( i = 0; i < a.size; ++i )
    {
        output << setw( 12 ) << a.ptr[ i ];

        if ( ( i + 1 ) % 4 == 0 ) // 4 numbers per row of output
            output << endl;
    } // End for

    if ( i % 4 != 0 ) // End last line of output
        output << endl;

    return output; // Enables cout << x << y;
} // End function operator<<