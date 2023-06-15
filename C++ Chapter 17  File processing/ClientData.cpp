// Figure 17.10: ClientData.cpp
// Class ClientData stores customer's credit information
#include <string>
#include "ClientData.h"
using namespace std;

// Default ClientData constructor
ClientData::ClientData( int accountNumberValue,
    string lastNameValue, string firstNameValue, double balancceValue )
{
    setAccountNumber( accountNumberValue );
    setLastName( lastNameValue );
    setFirstName( firstNameValue );
    setBalance( balancceValue );
} // End ClientData constructor

// Define function get account-number value
int ClientData::getAccountNumber() const
{
    return accountNumber;
} // End function getAccountNumber()

// Define function set account-numebr value
void ClientData::setAccountNumber( int accountNumberValue )
{
    accountNumber = accountNumberValue; // Should validate
} // End function setAccountNumber

// Get last-name value
string ClientData::getLastName() const
{
    return lastName;
} // End function getLastName

// Set last name
void ClientData::setLastName( string lastNameString )
{
    // Copy at most 15 characters from string to lastName
    int length = lastNameString.size();
    length = ( length < 15 ? length : 14 );
    lastNameString.copy( lastName, length ); // .copy() is a <string> member function 
    lastName[ length ] = '\0'; // Append null character to lastName
} // End function setLastName

// Get first-name value
string ClientData::getFirstName() const
{
    return firstName;
} // End function getFirstName

// Set first-name value
void ClientData::setFirstName( string firstNameString )
{
    // Copy at most 10 characters from string to firstName
    int length = firstNameString.size();
    length = ( length < 10 ? length : 9 );
    firstNameString.copy( firstName, length );
    firstName[ length ] = '\0'; // Append null character to firstName
} // End function setFirstName

// Get balance value
double ClientData::getBalance() const
{
    return balance;
} // End function getBalance

// Set balance value
void ClientData::setBalance( double balanceValue )
{
    balance = balanceValue;
} // End function setBalance