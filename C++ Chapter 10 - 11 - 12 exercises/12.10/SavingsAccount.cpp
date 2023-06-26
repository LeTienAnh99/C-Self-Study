// Member function definition of class SavingsAccount
// Inheritance: Derived class can access member funtions of Base class, BUT NOT Base class's private data members
// and Base class's constructor, destructor are NOT inherited
#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance )
{   // Explicitly called the Base class Account's constructor
    // Initial balance in this and initial rate
    setInterestRate( rate );
} // End constructor

// Function to set the interest rate
void SavingsAccount::setInterestRate( double rate )
{
    interestRate = rate;
} // End function setInterestRate()

// Function to get the interest rate
double SavingsAccount::getInterestRate()
{
    return interestRate;
} // End function getInterestRate

// Function to calculate the amount of interest earned by an account
double SavingsAccount::calculateInterest()
{
    return ( getInterestRate() * getBalance() );
} // End function calculateInterest()

// Function to calculate credit
void SavingsAccount::credit()
{
    Account::credit();
} // End function credit()

// Function to calculate debit
void SavingsAccount::debit()
{
    Account::debit();
} // End function debit()

double SavingsAccount::getBalance()
{   // Explitcitly call base class Account's getBalance()
    return Account::getBalance();
} // End function getBalance()