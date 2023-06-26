// Member function definitions for Derived class CheckingAccount
#include <iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance )
{
    feePerTransaction = fee;
} // End constructor

// Redefine credit function
double CheckingAccount::checkingAccountDebit()
{ // Invoke base class debit function
    if ( Account::debit() == true ) { // If debit succesfully
        //double result = ( checkingAccountGetBalance() - feePerTransaction );
        cout << "Balance after fee: ";
        return ( checkingAccountGetBalance() - feePerTransaction );
    } // End if
    else { // If not successfuly debit
        cout << "Balance unchanged: ";
        return checkingAccountGetBalance();
    } // End else
} // End function credit()

// Redefine debit function
double CheckingAccount::checkingAccountCredit()
{
    Account::credit();
    cout << "\nCredit successfully" << endl;
    cout << "Balance after fee: ";
    return ( checkingAccountGetBalance() - feePerTransaction );
} // End function credit

// Function to get the balances
double CheckingAccount::checkingAccountGetBalance()
{
    // Explicitly call base class Account's getBalance() to get the current balance
    return Account::getBalance();
} // End function checkingAccountGetBalance()
