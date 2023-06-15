// This file demonstrate member function in Section 15.4.2
// Demonstrate istream Member functions: peek, putback, ignore
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main()
{
    // Demonstrate the cin.ignore() function, compare with codes without cin.ignore()
    // Without cin.ignore(), only output the number
    int x;
    const int SIZE = 80;
    char str[ SIZE ];
    cout << "Enter a number and a string:\n";
    cin >> x;
    cin.getline( str, 80 ); // Take a string
    cout << "You have entered:\n";
    cout << x << endl;
    cout << str << endl;

    // Demonstrate using cin.ignore()
    cout << "Enter number and a string:\n";
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer before taking new line
    cin.getline( str, SIZE );
    cout << "You have entered:\n";
    cout << x << endl;
    cout << str << endl;
}