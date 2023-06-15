// Figure 5.1: fig05_01.cpp alternative - shorter edition
// Counter-controlled repetition (continued from chapter 4)

#include <iostream>
using namespace std;

int main()
{
    int counter = 0; // Declare and initialize control variable
    while ( ++counter <= 10 ) // Loop condition
    {
        cout << counter << " "; // " " is for adding space between numbers
    } // End while
} // End main
