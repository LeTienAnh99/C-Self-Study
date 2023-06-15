// Figure 7.4: fig07_04.cpp // Initializing an Array in a Declaration with an Initialize List
// Initializing an array in a declaration
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Use initializer list to initialize array n
    int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

    cout << "Element" << setw( 13 ) << "Value" << endl;

    // Output each array element's value
    for ( int i = 0; i < 10; ++i )
        cout << setw( 7 ) << i << setw( 13 ) << n[ i ] << endl;
} // End main
