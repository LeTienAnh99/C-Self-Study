// Figure 5.1: fig05_01.cpp
// Counter-controlled repetition (continued from chapter 4)

#include <iostream>
using namespace std;

int main()
{
    int counter = 1; // Declare and initialize control variable

    while ( counter <= 10 ) // Loop condition
    {
        cout << counter << " "; // " " is for adding space between numbers
        ++counter; // Increase counter by 1
    } // End while
} // End main
