// Figure 18.1: fig18_01.cpp
// Demonstrating string assignment and concatenation
#include <iostream>
#include <string>
using namespace std;

int main()
{   // Create an object of class string
    string string1( "cat" );
    string string2; // These two are initialized to the empty string
    string string3;

    string2 = string1; // Assign string1 to string2
    string3.assign( string1 ); // Assign string1 to string3
    cout << "string1: " << string1 << "\nstring2: " << string2
        << "\nstring3: " << string3 << "\n\n";

    // Modify string2 and string3
    string2[ 0 ] = string3[ 2 ] = 'r';

    cout << "After modification of string2, string3:\n" << "string1: "
        << string1 << "\nstring2: " << string2 << "\nstring3: ";

    // Demonstrating member function at
    for ( int i = 0; i < string3.length(); ++i )
        cout << string3.at( i );

    // Declare string4 and string5
    string string4( string1 + "apult" ); // Concatenation
    string string5; // Initialized to the empty string

    // Overloaded +=
    string3 += "pet"; // Create the word "carpet"
    string1.append( "acomb" ); // Create the word "catacomb"

    // Append subscript location 4 through end of string1 to
    // create string "comb" (string5 was initialized empty)
    string5.append( string1, 4, string1.length() - 4 );

    cout << "\n\nAfter concatenation:\nstring1: " << string1
        << "\nstring2: " << string2 << "\nstring3: " << string3
        << "\nstring4: " << string4 << "\nstring5:" << string5 << endl;
} // End main