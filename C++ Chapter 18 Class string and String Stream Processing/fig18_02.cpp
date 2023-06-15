// Figure 18.2: fig18_02.cpp
// Demonstrating string comparision 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1( "Testing the comparision functions." );
    string string2( "Hello" );
    string string3( "stinger" );
    string string4( string2 );

    cout << "string1: " << string1 << "\nstring2: " << string2
        << "\nstring3: " << string3 << "\nstring4: " << string4 << "\n\n";

    // Comparing string1 and string4
    if ( string1 == string4 )
        cout << "string1 == string4\n";
    else // string1 != string4
    {
        if ( string1 > string4 )
            cout << "string1 > string4\n";
        else // string1 < string4
            cout << "string1 < string4\n";
    } // End else

    // Comparing string1 and string2
    int result = string1.compare( string2 );

    if ( result == 0 )
        cout << "string1.compare( string2 ) > 0\n";
    else // result != 0 
    {
        if ( result > 0 )
            cout << "string1.compare( string2 ) > 0\n";
        else // result < 0
            cout << "string1.compare( string2 ) < 0\n";
    } // End else

    // Comparing string1 (elements 2-5) and string3 (element 0-5)
    result = string1.compare( 2, 5, string3, 0, 5 );

    if ( result == 0 )
        cout << "string1.compare( 2,5, string3, 0, 5 ) == 0\n";
    else // result != 0
    {
        if ( result > 0 )
            cout << "string1.compare( 2, 5, string3, 0, 5 ) == 0\n";
        else // result < 0 
            cout << "string1.compare( 2, 5, string3, 0, 5 ) < 0\n";
    } // End else

    // Comparing string2 and string4
    result = string4.compare( 0, string2.length(), string2 );

    if ( result == 0 )
        cout << "string4.compare( 0, string2.length(), " << "string2 ) == 0" << endl;
    else 
    {
        if ( result > 0 )
            cout << "string4.compare( 0, string2.length(), " << "string2 ) > 0" << endl;
        else 
            cout << "string4.compare( 0, string2.length(), " << "string2 ) < 0" << endl;
    }  // End else

    // Comparing string2 and string4
    result = string2.compare( 0, 3, string4 );

    if ( result == 0 )
        cout << "string2.compare( 0, 3, string4 ) == 0" << endl;
    else 
    {
        if ( result > 0 )
            cout << "string2.compare( 0, 3, string4 ) > 0" << endl;
        else 
            cout << "string2.compare( 0, 3, string4 ) < 0" << endl;
    } // End else
} // End main


