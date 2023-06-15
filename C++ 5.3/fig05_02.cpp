// Figure 5.2: fig05_02.cpp - For statement - for loop is a counter-controlled repetition
// Counter-controlled repetition with the for statement
#include <iostream>
using namespace std;

int main()
{
    // A for statement contains: initialization, loop condition, increment
    // ++counter is counter = counter + 1
    for ( int counter = 1; counter <= 10; ++counter )
        cout << counter << " ";

    cout << endl; // Output a new line
} // End main
