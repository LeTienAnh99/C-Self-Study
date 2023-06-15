// Figure 17.6: Fig16_06.cpp
// Reading and printing a sequential file.
#include <iostream>
#include <fstream> // File stream
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void outputLine( int, const string, double ); // Function prototype

int main()
{
    // ifstream constructor opens the file
    ifstream inClientFile( "client.txt", ios::in  );

    // Exit program if ifstream could not open file
    if ( !inClientFile )
    { // 0 is sucessful, 1 or other number means unsucessful
        cerr << "File could not be opened" << endl;
        exit( 1 );
    } // End if

    int account;
    string name;
    double balance;

    cout << left << setw( 10 ) << "Account" << setw( 13 )
        << "Name" << "Balance" << endl << fixed << showpoint;

    // Display each record in file
        
    while( inClientFile >> account >> name >> balance ) {
        outputLine( account, name, balance ); }
} // End main

// Display single record from file
void outputLine( int account, const string name, double balance )
{
    cout << left << setw( 10 ) << account << setw( 13 ) << name 
        << setw( 7 ) << setprecision( 2 ) << right << balance << endl;
} // End function outputLine()