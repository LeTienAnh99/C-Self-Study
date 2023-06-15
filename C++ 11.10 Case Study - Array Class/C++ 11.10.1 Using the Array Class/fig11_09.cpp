// Figure 11.9: fig11_09.cpp
// Array class test program
#include <iostream>
#include "Array.h"
using namespace std;
int main()
{
    Array integers1( 7 ); // Seven-element Array
    Array integers2; // 10-element Array by default

    // Print integers1 size and contents
    cout << "Size of Array integers1 is "
        << integers1.getSize()
        << "\nArray after initialization:\n" << integers1;

    // Print integers2 size and contents
    cout << "\nSize of Array integers2 is "
        << integers2.getSize()
        << "\nArray after initialization:\n" << integers2;

    // Input and print integers1 and integers2
    cout << "\nEnter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contain:\n"
        << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    // Use overloaded inequality (!=) operator
    cout << "\nEvaluating: integers1 != integers2" << endl;

    if ( integers1 != integers2 )
        cout << "integers1 and integers2 are not equal" << endl;

    // Create Array integers3 using integers1 as an
    // initializer: print size and contents
    Array integers3( integers1 ); // Invokes COPY constructor
    // The above line can be written as: Array integers3 = integers1;
    cout << "\nSize of Array integers3 is "
        << integers3.getSize()
        << "\nArray after initialization:\n" << integers3;

        // Use overloaded assignment (=) operator
        cout << "\nAssigning integers2 to integers1:" << endl;
        integers1 = integers2; // Note target Array is smaller

        cout << "integers1\n" << integers1
            << "integers2:\n" << integers2;

        // Use overloaded equality (==) operator
        cout << "\nEvaluating: integers1 == integers2" << endl;

        if ( integers1 == integers2 )
            cout << "integers1 and integers2 are equal" << endl;

        // Use overloaded subscript operator to create rvalue
        cout << "\nintegers1[5] is " << integers1[5] << endl;

        // Use overloaded subscript operator to create lvalue
        cout << "Assigning 1000 to integers1[5]" << endl;
        integers1[ 5 ] = 1000;
        cout << "integers1:\n" << integers1;

        // Attempt to use out-of-range subscript
        try
        {
            cout << "Attempt to assign 1000 to integers1[15]" << endl;
            integers1[ 15 ] = 1000; // Will give ERROR: subscripte out of range
        } // End try
        catch ( out_of_range &ex )
        {
            cout << "An exception occurred: " << ex.what() << endl;
        }// End catch
}
