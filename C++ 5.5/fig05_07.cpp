// Figure 5.7: fig05_07.cpp
// do...while repetition statement

#include <iostream>
using namespace std;

int main()
{
    int counter = 1; // Initialize counter

    do
    {
        cout << counter << " "; // Display counter
        ++counter; // Increment counter
    } while ( counter <=10 ); // End do...while

    cout << endl; // Output a newline
}
