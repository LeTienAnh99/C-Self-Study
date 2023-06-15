// Exercise 10.7: SavingsAccount Class
// Class definition for SavingsAccount class
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount
{
public:
    // Constructor for the SavingsAccount class
    SavingsAccount( double );

    // Member functions prototype:
    void calculateMonthlyInterest(); // Calculate the monthly interest
    static void modifyInterestRate( double ); // Set the annualInterestRate to a new value
    double getBalance() const;
private:
    static double annualInterestRate; // Store the annual interest rate for each of the savers
    double savingsBalance; // The amount the saver currently has on deposit
    double monthlyInterest;
};
#endif