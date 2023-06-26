// Derived class CheckingAccount.h
#include <iostream>
#include "Account.h"
using namespace std;

class CheckingAccount : public Account
{
public:
    CheckingAccount( double, double ); // Constructor that receive initial balance and a fee amount
    double checkingAccountDebit(); // Redefine debit function for CheckingAccount class
    double checkingAccountCredit(); // Redefine credit function for CheckingAccoung class
    double checkingAccountGetBalance();
private:
    double feePerTransaction;
}; 