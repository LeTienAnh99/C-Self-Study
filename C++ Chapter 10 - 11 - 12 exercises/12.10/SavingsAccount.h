// Derived class SavingsAccount.h
// SavingsAccount derived from class Account.h
#include <iostream>
#include "Account.h"
using namespace std;

class SavingsAccount : public Account
{
public:
    SavingsAccount( double, double ); // Default constructor initializing SavingsAccount's initial balance
    
    double calculateInterest(); // Calculate the amount of Interest earned by an account
    void setInterestRate( double ); // Set the interest rate
    double getInterestRate(); // Get the interest rate
    void credit(); // Calculate the credit amount
    void debit(); // Calculate the debit amount
    double getBalance(); // get the balance
private:
    double interestRate; // Interest rate
};