// Figure 7.14: fig07_14.cpp
// Demonstrating the const type qualifier

#include<iostream>
using namespace std;

void tryToModifyArray( const int [] ); // Function prototype
// Which indicates that the array is constant, cannot be changed
int main()
{
    int a[] = { 10, 20, 30 };

    tryToModifyArray( a ); // Function call to modify the array a
    cout << a[ 0 ] << ' ' << a[ 1 ] << ' ' << a[ 2 ] << '\n';
} // End main

// In function tryToModifyArray, "b" cannot be used
// to modify the original array "a" in main.
void tryToModifyArray( const int b[] )
{
    b[ 0 ] /= 2; // This will cause compilation error
} // End function
