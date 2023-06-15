// Figure 15.6: fig15_06.cpp
// Inputting characters using cin member function getline
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 80;
    char buffer[ SIZE ]; // Create array of 80 characters

    // Input characters in buffer via cin function getline()
    cout << "Enter a sentence:" << endl;
    cin.getline( buffer, SIZE );

    // Display buffer contents
    cout << "\nThe sentence entered is:" << endl << buffer <<endl;
} // End main