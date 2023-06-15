// Figure 11.5: fig11_05.cpp
// Demonstrating class PhoneNumber's overloaded stream insertion
// and stream extraction operators
#include <iostream>
#include "PhoneNumber.h"
#include "PhoneNumber.cpp"
using namespace std;
int main()
{
    PhoneNumber phone; // Create object phone

    cout << "Enter phone number in the form (123) 456-7890:" << endl;

    // cin >> phone invokes operator>> by implitcitly issuing
    // the non-member function call operator>>( cin, phone )
    cin >> phone;

    cout << "The phone number entered was: ";

    // cout << phone invokes operator<< by implicitly issuing
    // the non-member function call operator<<( cout, phone )
    cout << phone << endl;
} // End main