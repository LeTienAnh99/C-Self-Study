// Figure 8.6: fig08_06.cpp
// Pass-by-value is used to cube a variable's value
#include <iostream>
using namespace std;

int cubeByValue( int ); // Function prototype

int main()
{
    int number = 5; // Declare variable number in this scope

    cout << "The original value of number is: " << number;

    number = cubeByValue( number ); // Pass number by value to cubeByValue
    cout << "\nThe new value of number is: " << number << endl;
} // End main

// Calculate and return cube of integer argument
int cubeByValue( int n )
{
    return n * n * n; // Cube local variable n and return result
} // End function cubeByValue()
