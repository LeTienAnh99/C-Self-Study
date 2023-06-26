// Member functions definition for class Account.h
#include <iostream>
#include "Account.h"
using namespace std;

Account::Account( double initialBalance )
{
    if ( initialBalance >= 0.0 )
        balance = initialBalance;
    else { // If < 0
        cout << "Initial balance was invalid!" << endl;
        balance = 0.0;
        cout << "Initial balance is set to: " << balance << endl;
    } // balance < 0, negative number
} // End constructor for class Account

// Function for the user to set the credit amount
void Account::setCreditAmount()
{
    cout << "Enter the amount to add to your account: ";
    cin >> addAmount;
} // End function setCreditAmount()

// Function to calculate credit()
double Account::credit()
{ // Call funcion setCreditAmount()
    setCreditAmount();
    balance = balance + addAmount;
    return balance;
} // End function credit()

// Function for the user to set the debit amount
void Account::setDebitAmount()
{
    cout << "Enter the amount you want to withdraw: ";
    cin >> debitAmount;
} // End function setDebitAmount()

bool Account::debit()
{
    // Call function setDebitAmount()
    setDebitAmount();
    if ( debitAmount >= balance ) {
        cout << "Debit amount exceeded account balance!" << endl;
        return false;
    } // End if
    else { // Debit amount < balance
        balance = balance - debitAmount;
        cout << "Withdraw success!" << endl;
        return true;
    } // End else
} // End debit()

// Function to return the current balance
double Account::getBalance()
{
    return balance;
} // End function returnBalance()
