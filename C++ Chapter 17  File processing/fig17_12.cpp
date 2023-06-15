// Figure 17.12: fig17_12.cpp
// Writing to a random-access file
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ClientData.h" // ClientData class definition
using namespace std;

int main()
{
    int accountNumber;
    string lastName;
    string firstName;
    double balance;

    fstream outCredit( "credit.dat", ios::in | ios::out | ios::binary );

    // Exit program if fstream cannot open file
    if ( !outCredit )
    {
        cerr << "File could not be opened." << endl;
        exit( 1 );
    } // End if

    cout << "Enter account number (1 to 100, 0 to end input)\n? ";

    // Require user to specify account number
    ClientData client; // Create an object of class ClientData
    cin >> accountNumber;

    // User enters information, which is copied into file
    while ( accountNumber > 0 && accountNumber <= 100 )
    {
        // User enters last name, first name and balance
        cout << "Enter lastname, firstname, balance\n? ";
        cin >> lastName;
        cin >> firstName;
        cin >> balance;

        // Set record accountNumber, lastName, firstName and balance values
        client.setAccountNumber( accountNumber );
        client.setLastName( lastName );
        client.setFirstName( firstName );
        client.setBalance( balance );

        // seek position in file of user-specified record
        outCredit.seekp( ( client.getAccountNumber() - 1 ) * 
            sizeof( ClientData ) );
        
        // Write user-specified information in file
        outCredit.write( reinterpret_cast< const char * >( &client ),
            sizeof( ClientData ) );
    
        // Enable user to enter another account
        cout << "Enter account number\n? ";
        cin >> accountNumber;
    } // End while
} // End main