// Figure 7.3: fig07_03.cpp. Declaring an Array and Using Loop to initialize the Array's elements
// Initializing an array's elements to zeros and printing the array.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n[ 10 ]; // n is an array of 10 integers

    // Initialize elements of array n to 0
    cout << "Element" << setw( 13 ) << "Value" << endl;
    for ( int i = 0; i < 10; ++i )
    {
        n[ i ] = 0; // Set element at location i to 0
        cout << setw( 7 ) << i << setw( 13 ) << n[ i ] << endl;
    }
       // n[ i ] = 0; // Set element at location i to 0

   // cout << "Element" << setw( 13 ) << "Value" << endl;

    // Output each array element's value
   // for ( int j = 0; j < 10; ++j )
     //   cout << setw( 7 ) << j << setw( 13 ) << n[ j ] << endl;
} // End main
