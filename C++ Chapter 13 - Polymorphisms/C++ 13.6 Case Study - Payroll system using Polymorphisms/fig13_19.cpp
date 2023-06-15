// Figure 13.19: fig13_19.cpp
// Demonstrating downcasting and runtime type information
// NOTE: You may need to enable RTTI on your compiler
// before you can execute this application
#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    // Set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // Create vector of three base-class pointers
    vector < Employee * > employees( 3 );

    // Initialize vector with various kinds of Employees
    employees[ 0 ] = new SalariedEmployee(
        "John", "Smith", "111-11-1111", 800 );
    employees[ 1 ] = new CommissionEmployee(
        "Sue", "Jones", "333-33-3333", 10000, .06 );
    employees[ 2 ] = new BasePlusCommissionEmployee(
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );

    // Polymorphically process each element in vector employees
    for ( size_t i = 0; i < employees.size(); ++i )
    {
        employees[ i ]->print(); // Output employee info
        cout << endl;

        // Downcast pointer
        BasePlusCommissionEmployee *derivedPtr = 
            dynamic_cast < BasePlusCommissionEmployee * > ( employees[ i ] );
        
        // Determine whether element points to base-salaried
        // Commission employee
        if ( derivedPtr != 0 ) // 0 if not a BasePlusCommissionEmployee
        {
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "old base salary: $" << oldBaseSalary << endl;
            derivedPtr->setBaseSalary( 1.10 * oldBaseSalary );
            cout << "new base salary with 10% increase is: $"
                << derivedPtr->getBaseSalary() << endl;
        } // End if

        cout << "earned $" << employees[ i ]->earnings() << "\n\n";
    } // End for

    // Release objects pointed to by vector's elements
    for ( size_t j = 0; j < employees.size(); ++j )
    {
        // Output class name
        cout << "deleting object of "
            << typeid( *employees[ j ] ).name() << endl;

        delete employees[ j ];
    } // End for
} // End main