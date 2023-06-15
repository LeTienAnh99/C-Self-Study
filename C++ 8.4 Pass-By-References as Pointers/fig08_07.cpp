// Figure 8.7: fig08_07.cpp
// Pass-by-reference with a pointer argument used to cube
// a variable's value
#include <iostream>
using namespace std;

void cubeByReference( int *); // Function prototype with an integer pointer

int main()
{
    int number = 5;

    cout << "The original value of number is: " << number;

    cubeByReference( &number ); // Pass number address to cubeByReference

    cout << "\nThe new value of number is: " << number << endl;
} // End main

// Calculate cube of *nPtr; modifies variable number in main
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr; // Cube *nPtr
} // End function cubeByReference
