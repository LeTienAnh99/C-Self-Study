// Figure 11.10: Array.h
// Array class definition with overloaded operators.
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array
{
    friend ostream &operator<<( ostream &, const Array & );
    friend istream &operator>>( istream &, Array & );
public: 
    Array( int = 10 ); // Default constructor
    Array( const Array & ); // Copy constructor
    ~Array(); // Destructor
    int getSize() const; // Return size

    const Array &operator=( const Array & ); // Assignment operator
    bool operator==( const Array & ) const; // Equality operator

    // Inequality operator; returns opposite of == operator
    bool operator!=( const Array &right ) const
    {
        return ! ( *this == right ); // Invokes Array::operator==
    } // End function operator!= 

    // Subscript operator for non-const objects returns modifiable lvalue
    int &operator[]( int );

    // Subscript operator for const objects returns rvalue
    int operator[]( int ) const;
private:
    int size; // Pointer-based array size
    int *ptr; // Pointer to first element of pointer-based array
}; // End class Array
#endif