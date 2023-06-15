// Fig 6.17: fig06_17.cpp
// Functions that take no arguments
#include <iostream>
using namespace std;

void function1(); // Function that takes no arguments
void function2( void ); // Function that takes no arguments

int main()
{
    function1(); // Call function1 with no arguments
    function2(); // Call function2 with no arguments
} // End main

// function1 uses an empty parameter list to specify that
// the function receives no arguments
void function1()
{
    cout << "function1 takes no arguments" << endl;
} // End function1

// function2 uses a void parameter list to specify that
// the function receives no arguments
void function2()
{
    cout << "function2 also takes no arguments" << endl;
} // End function2

