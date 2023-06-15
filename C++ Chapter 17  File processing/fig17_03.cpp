// Figgure 17.3: fig17_03.cpp
// Create a sequential file.
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    // Use ofstream constructor to open file
    ofstream outClientFile( "client.txt", ios::out );
    // "client.txt" is the file name, ios::out is file-open mode; here is open-for-output
    // Exit program if unable to create file
    if ( !outClientFile ) // Here using the overloaded ! operator
    {
        cerr << "File could not be opened" << endl;
        exit( 1 ); // exit( 1 ) means error occurs, exit(0) means successs 
    } // End if

    cout << "Enter the account, name, balance." << endl
        << "Enter the end-of-file to end input.\n? ";

    int account; // Account
    string name; // Name
    double balance; // Balance

    // Read account, name and balance from cin, then place in the file
    while ( cin >> account >> name >> balance ) // Overloading cin operator
    {
        outClientFile << account << ' ' << name << ' ' << balance << endl;
        cout << "? ";
    } // End while loop
} // End main