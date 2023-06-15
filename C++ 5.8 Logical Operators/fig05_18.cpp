// Figure 5.18: fig05_18.cpp
// Logical operators.
#include <iostream>
using namespace std;

int main()
{
    // Create truth table for logical AND && operator
    cout << boolalpha << "Logical AND (&&)" // If dont use boolalpha, the results will be 1 and 0
        << "\nfalse && false: " << (false && false)
        << "\nfalse && true: " << (false && true)
        << "\ntrue && false: " << (true && false)
        << "\ntrue && true: " << (true && true) << "\n\n";

    // Create truth table for ! (logical negation) operator
    cout << "Logical OR (||)"
        << "\nfalse || false: " << (false || false)
        << "\nfalse || true: " << (false || true)
        << "\ntrue || true: " << (true || true)
        << "\ntrue || false: " << (true || false) << "\n\n";

    // Create truth table for ! (logical negation) operator
    cout << "Logical NOT (!)"
        << "\n!false: " << (!false)
        << "\n!true: " << (!true) << endl;
} // End main
