// Figure 7.5: fig07_05.cpp
// Set array s to the even integers from 2 to 20.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Const variable can be used to specify array size
    const int arraySize = 10;

    int s[ arraySize ]; // Array s has 10 elements

    for ( int i = 0; i < arraySize; ++i ) // Set the values
        s[ i ] = 2 + 2 * i;

    cout << "Element" << setw( 13 ) << "Value" << endl;

    // Outout contents of array s in tabular format
    for ( int j = 0; j < arraySize; ++j )
        cout << setw( 7 ) << j << setw( 13 ) << s[ j ] << endl;
} // End main
