// Figure 15.8: fig15_08.cpp
// Using stream manipulators hex, oct, dec, and setbase
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;

    cout << "Enter a decimal number: ";
    cin >> number; // Input number

    // Use hex stream manupulator to show hexadecimal number
    cout << number << " in hexadecimal is: " << hex
        << number << endl;

    // Use oct stream manipulator to show octal number
    cout << dec << number << " in octal is: "
        << oct << number << endl;
    
    // Use setbase stream manipualtor to show decimal number
    cout << setbase( 10 ) << number << " in decimal is: "
        << number << endl;
} // End main