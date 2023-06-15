// Figure 13.1: fig13_01.cpp
// Aiming base-class and derived-class pointers at base-class
// and derived-class objects, respectively.
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
    CommissionEmployee *commissionEmployeePtr = 0; // Object này là 1 con trỏ

    // Create a derived-class object
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );    

    // Create a derived-class pointer
    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = 0; // Object này là 1 con trỏ

    // Set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // Output objects commissionEmployee and basePlusCommisionEmployee objects
    cout << "Print base-class and derived-class objects:\n\n";
    commissionEmployee.print();
    cout << "\n\n";
    basePlusCommissionEmployee.print();

    // Aim base-class pointer at base-class object and print
    commissionEmployeePtr = &commissionEmployee; // Perfectly natural
    cout << "\n\nCalling print with base-class pointer to "
        << "\nbase-class object invokes base-class print function:\n\n";
    commissionEmployeePtr->print(); // Invokes base-class print. // Vì object này là 1 con trỏ, nên k thể dùng dot operator, mà phải dùng arrow operator

    // Aim derived-class pointer at derived-class object and print
    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee; // natural
    cout << "\n\n\nCalling print with derived-class pointer to "
        << "\nderived-class object invokes derived-class "
        << "print function:\n\n";
    basePlusCommissionEmployeePtr->print(); // Invokes derived-class print

    // aim base-class pointer at derived-class object and print
    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\n\nCalling print with base-class pointer to "
        << "derived-class object\ninvokes base-class print "
        << "function on that derived-class object:\n\n";
    commissionEmployeePtr->print(); // Invokes base-class print()
    cout << endl;
} // End main
