// Member functions definition for class SavingsAccount
#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"
using namespace std;

// Constructor
SavingsAccount::SavingsAccount( double balance )
{
    savingsBalance = balance;
   // Nếu khai báo balance = savingsBalance thì output sẽ lỗi hết
}

// Initialize first annualInteresteRate to 0
// Must initialize, otherwise, will cause compilation error: annualInterestRate not referenced
double SavingsAccount::annualInterestRate( 0 );
double SavingsAccount::getBalance() const
{
    return savingsBalance;
}
// Member functions definitions

void SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance += (( savingsBalance * annualInterestRate ) / 12);
}

void SavingsAccount::modifyInterestRate( double a )
{
    annualInterestRate = a;
}
