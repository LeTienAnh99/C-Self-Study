// Figure 17.11: fig17_11.cpp
// Creating a randomly accessed file
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ClientData.h"
using namespace std;

int main()
{
    ofstream outCredit( "credit.dat", ios::out | ios::binary );

    // Exit program if ofstream could not open file
    if ( !outCredit )
    {
        cerr << "File could not be opened." << endl;
        exit( 1 );
    } // End if

    ClientData blankClient; // Constructor zeros out each data member

    // Output 100 blank records to file
    for ( int i = 0; i < 100; ++i )
        outCredit.write( reinterpret_cast< const char * >( &blankClient ),
            sizeof( ClientData ) );
} // End main