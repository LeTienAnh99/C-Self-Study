// Figure 12.6: fig12_06.cpp
// Testing class CommissionEmployee
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    // Instantiate a CommissionEmployee object - a constructor
    CommissionEmployee employee(
        "Sue", "Jones", "222-22-2222", 10000, .06 );

    // Set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // Get commmission employee data
    cout << "Employee information obtained by get function: \n"
        << "\nFirst name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security number is "
        << employee.getSoCialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommissionRate() << endl;

    employee.setGrossSales( 8000 ); // Set gross sales
    employee.setCommissionRate( .1 ); // Set commission rate

    cout << "\nUpdated employee information outout by print function: \n"
        << endl;
    employee.print(); // Display the new employee information

    // Display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
} // End main