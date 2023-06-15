// Enter an 16-bit integer and output 8 MSB bits, 8 LSB bits
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    const int shift = 8 * sizeof( short ) - 1; // -1 vì chỉ xét từ 0-15 (16 bits)
    int mask = 1 << shift; // mask dùng để so sánh bitwise, mask: 10000000 00000000

    short a;
    cout << "Enter an 16-bit (2 bytes) integer: ";
    cin >> a;

    cout << "a is: " << a;
    cout << "\nOutput integer a in 16-bits binary: " << endl;

    for ( int i = 1; i <= shift + 1; ++i )
    {
        if ( ( mask & a ) == 0 ) 
            cout << "0";
        else 
            cout << "1";
        mask >>= 1;

        if ( i % 8 == 0)
            cout << ' ';
    } // End for
} // End main