// Chapter 12: Exercise 12.10
// Account Inheritance Hierchary
// Definition of Base class Account.h
#include <iostream>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
    Account( double ); // Constructor to initialize balance

    double credit(); // Member function to add an amount to current credit
    bool debit(); // Withdraw money from account
    void setDebitAmount(); // Function to set the debit amount
    void setCreditAmount(); // Function to get the credit amount
    double getBalance(); // Return the current balance
private:
    double balance; // Account balance
    double addAmount; // Add amount
    double debitAmount; // Debit amount
};

#endif