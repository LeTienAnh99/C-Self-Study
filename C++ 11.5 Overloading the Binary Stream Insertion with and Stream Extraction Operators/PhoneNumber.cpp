// Figure 11.4: PhoneNumber.cpp
// Overloaded stream insertion and stream extraction operators
// for class PhoneNumber
#include <iomanip>
#include "PhoneNumber.h"
using namespace std;

// Overloaded stream insertion operator; cannot be
// a member function if we woule like to invoke it with
// cout << somePhoneNumber;
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
    output << "(" << number.areaCode << ") "
        << number.exchange << "-" << number.line;
    return output; // Enables cout << a << b << c;
} // End function operator<<

// Overloaded stream extraction operator; cannot be
// a member function if we would like to invoke it with
// cin >> somePhoneNumber;
istream &operator>>( istream &input, PhoneNumber &number )
{
    input.ignore(); // skip (
    input >> setw( 3 ) >> number.areaCode; // Input area code
    input.ignore( 2 ); // skip ) and space
    input >> setw( 3 ) >> number.exchange; // Input exchange
    input.ignore(); // skip dash (-)
    input >> setw( 4 ) >> number.line; // Input line
    return input; // Enables cin >> a >> b >> c;
} // End function operator>>