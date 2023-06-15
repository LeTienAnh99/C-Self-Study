// Figure 6.20: fig06_20.cpp
// Initializing and using a reference
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int &y = x; // y refers to (is an alias for) x

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7; // Actually modifies x
    cout << "New x = " << x << endl << "New y = " << y << endl;
} // End main
