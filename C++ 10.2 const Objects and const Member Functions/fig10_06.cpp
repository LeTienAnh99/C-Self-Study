// Fig 10.6: fig10_06.cpp
// Program to test class Increment.
#include <iostream>
#include "Increment.h"
#include "Increment.cpp"
using namespace std;
int main()
{
    Increment value( 10, 5 );

    cout << " Before incrementing: ";
    value.print();

    for ( int j = 1; j <= 3; ++j )
    {
        value.addIncrement();
        cout << "After increment " << j << ": ";
        value.print();
    } // End for
} // End main 