// Figure 13.6: fig13_06.cpp
// Introducing polymorphism, virtual function and dynamic binding
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    // Create a base-class object
    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "222-22-2222", 10000, .06 );

    // Create a base-class pointer
    CommissionEmployee *commissionEmployeePtr = 0;

    // Create a derived-class object
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );    

    // Create a derived-class pointer
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0;

    // Set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // Output objects using static binding
    cout << "\n\n\nInvoking print function on base-class and derived-class "
        << "\nobjects with static binding\n\n";
    commissionEmployee.print(); // Static binding
    cout << "\n\n";
    basePlusCommissionEmployee.print(); // Static binding

    // Ouput objects using dynamic binding
    cout << "\n\n\nInvoking print function on base-class and "
        << "derived-class \nobjects with dynamic binding";
    
    // Aim base-class pointer at base-class object and print
    commissionEmployeePtr = &commissionEmployee; // Perfectly natural
    cout << "\n\nCalling virtual function print with base-class pointer to "
        << "\nto base-class object invokes base-class "
        << "print function:\n\n";
    commissionEmployeePtr->print(); // Invokes base-class print

    // Aim derived-class pointer at derived-class object and print
    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee; // natural
    cout << "\n\nCalling virtual function print with derived-class pointer to "
        << "\nderived-class object invokes derived-class "
        << "print function:\n\n";
    basePlusCommissionEmployeePtr->print(); // Invokes derived-class print

    // Aim base-class pointer at derived-class object and print
    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer to "
        << "derived-class object invokes derived-class "
        << "print function:\n\n";
    commissionEmployeePtr->print(); // Invokes base-class print
    cout << endl;
} // End main
