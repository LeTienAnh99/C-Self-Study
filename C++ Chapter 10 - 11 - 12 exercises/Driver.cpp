// Driver program for the SavingsAccount class
#include "SavingsAccount.h"
#include <iostream>
using namespace std;

int main()
{
    SavingsAccount saver1( 2000.0 );
    SavingsAccount saver2( 3000.0 );

    // Print the original balance for saver1 and saver2
    cout << "The original balance for saver1 is " << saver1.getBalance() << endl;
    cout << "The original balance for saver2 is " << saver2.getBalance() << endl;

    // Call function calculateMonthlyInterest() to calculate the new balance and output new balance for each object
    // Also set values for annualRate
    saver1.modifyInterestRate(0.03);
    saver1.calculateMonthlyInterest();
    cout << "\nNew balance for saver1: " << saver1.getBalance() << endl;
    saver2.modifyInterestRate(0.03);
    saver2.calculateMonthlyInterest();
    cout << "New balance for saver2: " << saver2.getBalance() << endl;

    // Demo another way to set the annualRate
    SavingsAccount::modifyInterestRate(0.04);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "\nNew balance for saver1: " << saver1.getBalance() << endl;
    cout << "New balance for saver2: " << saver2.getBalance() << endl;
}