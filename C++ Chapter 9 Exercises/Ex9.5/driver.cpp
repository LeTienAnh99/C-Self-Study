// Driver program for the Complex Class
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex complex1( 2, 3 );
    Complex complex2( 4, 7 );
    Complex complex3; // Default constructor
    Complex complexTotal; // Object to store the result of the add()
    Complex complexSubtract; // Object to store the result of the subtract()

    cout << "The original values of the 3 object are:" << endl;
    complex1.printNumber();
    complex2.printNumber();
    complex3.printNumber();
    cout << endl;

    cout << "Values of complexTotal object after arithmetic operation are:" << endl; 
    complexTotal.add( complex1, complex2 );
    complexTotal.printNumber();
    complexSubtract.subtract( complex1, complex2 );
    complexSubtract.printNumber();

    cout << "Values in object 1 and object 2 are:" << endl;
    complex1.printNumber();
    complex2.printNumber();
    cout << endl;

} // End main