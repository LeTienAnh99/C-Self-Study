// Figure 8.14: fig08_14.cpp
// Sizeof operator when used on an array name
// return the number of bytes in the array
#include <iostream>
using namespace std;

size_t getSize( double * ); // Function prototype with size_t type

int main()
{                       // Each double is as of 8 bytes
    double array[ 20 ]; // 20 doubles; occupies 160 bytes on our system

    cout << "The number of bytes in the array is: " << sizeof( array ) << endl;
    cout << "Size of the array is: " << sizeof array / sizeof( array[ 0 ] ) << endl;
    cout << "\nThe number of bytes returned by getSize is: "
        << getSize( array ) << endl;
} // End main

// Function to return size of ptr
size_t getSize( double *ptr )
{
    return sizeof( ptr ); // <- return size of ptr
} // End function getSize
