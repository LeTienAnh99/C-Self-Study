// Figure 13.17: fig13_17.cpp
// Processing Employee derived-class objects individually
// and polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;
// Function prototype
void virtualViaPointer( const Employee * const );
void virtualViaReference( const Employee & );

int main()
{
    // Set floating point ouput formatting
    cout << fixed << setprecision( 2 );

    // Create derived-class objects
    SalariedEmployee salariedEmployee(
        "John", "Smith", "333-33-3333", 800 );
    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "333-33-3333", 10000, .06 );
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
    
    cout << "Employees processed individually using static binding:\n\n";

    // Output each Employee's info and earnings using static binding
    salariedEmployee.print();
    cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned $" << basePlusCommissionEmployee.earnings()
        << "\n\n";

    // Create vector of three base-class pointers
    vector < Employee * > employees( 3 );

    // Initialize vector with Employees
    employees[ 0 ] = &salariedEmployee;
    employees[ 1 ] = &commissionEmployee;
    employees[ 2 ] = &basePlusCommissionEmployee;

    cout << "Employee processed polymorphically via dynamic binding:\n\n";

    // Call virtualViaPointer to print each Employee's info
    // and earnings using dynamic binding
    cout << "Virtual function calls made of base-class pointers:\n\n";
    // size_t là kiểu dữ liệu, tự động chuyển đổi kiểu dữ liệu của nó
    for ( size_t i = 0; i < employees.size(); ++i )
        virtualViaPointer( employees[ i ] );

    // Call virtualViaReference to print each Employee's info
    // and earnings using dynamic binding
    cout << "Virtual function calls made off base-class references:\n\n";

    for ( size_t i = 0; i < employees.size(); ++i )
        virtualViaReference( *employees[ i ] ); // Note dereferencing
} // End main

// Call Employee virtual functions print and earnings off a
// base-class pointer using dynamic binding
void virtualViaPointer( const Employee * const baseClassPtr )
{
    baseClassPtr->print();
    cout << "/nearned $" << baseClassPtr->earnings() << "\n\n";
} // End function virtualViaPointer

// Call Employee virtual functions print and earnings off a
// base-class reference using dynamic binding
void virtualViaReference( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
} // End function virtualViaReference
