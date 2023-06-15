// Figure 17.9: ClientData.h
// Class ClientData definition used in Fig. 17.11-Fig.17.14
#ifndef CLIENTDATA_H
#define CLIENTDATA_H

#include <string>
using namespace std;

class ClientData
{
public:
    // Default ClientData constructor
    ClientData( int = 0, string = "", string = "", double = 0.0 );

    // Accessor functions for accountNumber
    void setAccountNumber( int );
    int getAccountNumber() const;

    // Accessor functions for lastName
    void setLastName( string );
    string getLastName() const;

    // Accessor functions for firstName
    void setFirstName( string );
    string getFirstName() const;

    // Accessor functions for balance
    void setBalance( double );
    double getBalance() const;
private:
    int accountNumber;
    char lastName[ 15 ];
    char firstName[ 10 ];
    double balance;
}; // End class ClientData

#endif
