// Driver program to test the Account class Inheritance Hierchary in Exercise 12.10
#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main()
{   // Create 3 objects of class Account to test 3 cases
    Account account_1( 100.0 ); // Case 1: valid initial balance > 0
    Account account_2( 0.0 ); // Case 2: valid initial balance = 0
    Account account_3( -1.0 ); // Case 3: invalid initial balance < 0

    // Test base class Account getBalance() function
    cout << "Initial balance of account_1: " << account_1.getBalance() << endl;
    cout << "Initial balance of account_2: " << account_2.getBalance() << endl;
    cout << "Initial balance of account_3: " << account_3.getBalance() << endl;
    cout << endl;

/*  UNLOCK THIS PART TO TEST THE BELOW CODES
    // Test base class Account member functions:
    account_1.credit(); // Test with input = 20, output = 120
    cout << "The balance of account_1 now is: " << account_1.getBalance() << endl << endl;
    account_1.debit(); // Test with input = 20, output = 100
    cout << "The balance of account_1 now is: " << account_1.getBalance() << endl << endl;
    account_1.debit(); // Test with input = 100, output Cautions and balance unchanged (balance = 100)
    cout << "The balance of account_1 now is: " << account_1.getBalance() << endl << endl;
*/
    // Test Derived class SavingsAccount getBalance() function
    SavingsAccount savingsAccount_1( 100.0, 0.1 ); // Case 1: valid balance
    SavingsAccount savingsAccount_2( 0.0, 0.1 ); // Case 2: valid balance
    SavingsAccount savingsAccount_3( -1.0, 0.1 ); // Case 3: invalid balance

     // Test derived class SavingsAccount getBalance() function
    cout << "Initial balance of savingsAccount_1: " << savingsAccount_1.getBalance() << endl;
    cout << "Initial balance of savingsAccount_2: " << savingsAccount_2.getBalance() << endl;
    cout << "Initial balance of savingsAccount_3: " << savingsAccount_3.getBalance() << endl;
    cout << endl;

/*  UNLOCK THIS PART TO TEST THE BELOW CODES
    // Test derived class SavingsAccount member functions:
    savingsAccount_1.credit(); // Test with input = 20, output = 120
    cout << "The balance of savingsAccount_1 now is: " << savingsAccount_1.getBalance() << endl << endl;
    savingsAccount_1.debit(); // Test with input = 20, output = 100
    cout << "The balance of savingsAccount_2 now is: " << savingsAccount_1.getBalance() << endl << endl;
    savingsAccount_1.debit(); // Test with input = 100, output Cautions and balance unchanged (balance = 100)
    cout << "The balance of savingsAccount_1 now is: " << savingsAccount_1.getBalance() << endl << endl;
*/

/* UNLOCK THIS PART TO TEST THE BELOW CODES
    // Test derived class SavingsAccount member function calculateInterestRate()
    cout << "savingsAccount_1 interestRate is: " << savingsAccount_1.getInterestRate() << endl;
    cout << "Result of function calculateInterest(): " << savingsAccount_1.calculateInterest() << endl;
    cout << "The balance of savingsAccount_1 now is: " << savingsAccount_1.getBalance() << endl << endl;
*/

    // Test derived class CheckingAccount member functions
    CheckingAccount checkingAccount_1( 100.0, 10.0 ); // Case 1: valid balance
    cout << "Initial balance of checkingAccount_1: " << checkingAccount_1.getBalance() << endl; // Use base class getBalance()
    cout << "Initial balance of checkingAccount_1: " << checkingAccount_1.checkingAccountGetBalance() << endl << endl; // Use derived class checkingAccountGetBalance()

    cout << checkingAccount_1.checkingAccountCredit() << endl << endl;
    cout << checkingAccount_1.checkingAccountDebit() << endl << endl;
} // End main