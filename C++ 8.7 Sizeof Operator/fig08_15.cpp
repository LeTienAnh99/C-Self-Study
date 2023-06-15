// Figure 8.15: fig08_15.cpp
// Demonstrating the sizeof operator.
#include <iostream>
using namespace std;

int main()
{
    char c; // Variable of type char
    short s; // Variable of type short
    int i; // Variable of type int;
    long l; // Variable of type long
    float f; // Variable of type float
    double d; // Variable of type double
    long double ld; // Variable of type long double
    int array[ 20 ]; // Array of int
    int *ptr = array; // Variable of type int *

    cout << "sizeof c = " << sizeof c
        << "\tsizeof(char) = " << sizeof( char )
        << "\nsizeof s = " << sizeof s
        << "\tsizeof(short) = " << sizeof( short )
        << "\nsizeof i = " << sizeof i
        << "\tsizeof(int) = " << sizeof( int )
        << "\nsizeof l = " << sizeof l
        << "\tsizeof(long) = " << sizeof( long )
        << "\nsizeof f = " << sizeof f
        << "\tsizeof(float) = " << sizeof( float )
        << "\nsizeof d = " << sizeof d
        << "\tsizeof(double) = " << sizeof( double )
        << "\nsizeof ld = " << sizeof ld
        << "\tsizeof(long double) = " << sizeof( long double )
        << "\nsizeof array = " << sizeof array
        << "\nsize of ptr = " << sizeof ptr << endl; // Use sizeof *ptr << endl; also output ptr = 4
} // End main
