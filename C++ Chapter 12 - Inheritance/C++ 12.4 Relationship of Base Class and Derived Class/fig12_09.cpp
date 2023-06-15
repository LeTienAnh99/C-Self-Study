// Figure 12.9: fig12_09.cpp
// Testing class BasePlusComissionEmployee.
#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    // Instantiate BasePlusCommissionEmployee object
    BasePlusCommissionEmployee employee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
    
    // Set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // Get commission employee data
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security number is "
        << employee.getSoCialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommissionRate()
        << "\bBase salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary( 1000 ); // Set base salary

    cout << "\nUpdated employee information output by print function: \n"
        << endl;
    employee.print(); // Display the new employee information

    // Display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
} // End main
