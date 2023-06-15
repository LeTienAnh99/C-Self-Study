// Figure 6.21: fig06_21.cpp
// References must be initialized
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int &y; // Error: y must be initialized

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;
} // End main
// *Remember to declare y as reference as well as initialize it
