// Figure 4.19: fig04_19.cpp
// Preimcrementing and postincrementing demo.
#include <iostream>
using namespace std;

int main()
{
    int c;

    // Demonstrate postincrement: c++
    c = 5; // Assign 5 to c
    cout << c << endl; // Print c = 5
    cout << c++ << endl; // Print c = 5 then postincrement
    cout << c << endl; // Print c = 6

    cout << endl; // Skip a line

    // Demonstrate preincrement
    c = 5; // Assign 5 to c
    cout << c << endl; // Print c = 5
    cout << ++c << endl; // Preincrement then print 6
    cout << c << endl; // Print 6
} // End main
