// Figure 9.19: fig09_19.cpp
// Demonstrating that class objects can be assigned
// to each other using default membervise assignment
#include <iostream>
#include "Date.h"
#include "Date.cpp"
using namespace std;

int main()
{
    Date date1( 7, 4, 2004 );
    Date date2; // date2 defaults to 1/1/2000

    cout << "date1 = ";
    date1.print();
    cout << "\ndate2 = ";
    date2.print();

    date2 = date1; // Default memberwise assignment

    cout << "\n\nAfter default memberwise assignment, date2 = ";
    date2.print();
    cout << endl;
} // End main