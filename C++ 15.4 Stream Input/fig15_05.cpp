// Figure 15.5: fig15_05.cpp
// Compare input of a string via cin and cin.get
#include <iostream>
using namespace std;

int main()
{
    // Create two char arrays, each with 80 elements
    const int SIZE = 80;
    char buffer1[ SIZE ];
    char buffer2[ SIZE ];

    // Use cin to input characters into buffer1
    cout << "Enter a sentence:" << endl;
    cin >> buffer1;

    // Display buffer1 contents
    cout << "\nThe string read with cin was:" << endl
        << buffer1 << endl << endl;

    // Use cin.get to input characters into buffer2
    cin.get( buffer2, SIZE );

    // Display buffer2 contents
    cout << "The string read with cin.get was:" << endl
        << buffer2 << endl;
} // End main