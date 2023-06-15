// Figure 15.7: fig15_07.cpp
// Unformatted I/O using read, gcount, and write
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 80;
    char buffer[ SIZE ]; // Create array of 80 characters

    // Use function read to input characters into buffer
    cout << "Enter a sentence:" << endl;
    cin.read( buffer, 20 );

    // Use functions write and gcount to display buffer characters
    cout << endl << "The sentence entered was:" << endl;
    cout.write( buffer, cin.gcount() );
    cout << endl;
} // End main