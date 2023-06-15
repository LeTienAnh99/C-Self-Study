// Exercise 7.8
#include <iostream>
#include <iomanip>
using namespace std;

// a. Display the value of element 6 of character array f
const int sizeF = 10;
const int sizeB = 10;
const int sizeG = 5;
int g[ sizeG ] = {};
int f[ sizeF ] = { 1, 2, 3, 4, 5, 6, 7, 8 };
float b[ sizeB ] = {};
int main()
{
    cout << "Value of element 6: " << f[6] << endl;

// b. Input a value into element 4 of one-dimensional floating-point array b
    cout << "Enter value for element 4: ";
    cin >> b[3];
    cout << "Element 4 now has the value: " << b[3] << endl;
// c. Initialize each of the 5 elements of 1D integer array g to 8
    cout << "The orignal 5 element of array g:" << endl;
    for (int i = 0; i < sizeG; ++i ) {
        cout << g[ i ] << setw( 3 );
    }
    // Modify array g[] to 8;
    cout << "\nNew values for each element of array g: ";
    for (int i = 0; i < sizeG; ++i ) {
        //g[ i ] = 8;
        g[ i ] = g[ i ] + 8;
        cout << g[ i ] << setw( 2 )
    }
}

