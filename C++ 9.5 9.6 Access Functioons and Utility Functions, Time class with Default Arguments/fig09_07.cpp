// Figure 9.7L fig09_07.cpp
// Utility function demonstration.
// Compile this program with SalesPerson.cpp

// Include SalesPerson class definition from SalesPerson.h
#include "SalesPerson.h"
#include "SalesPerson.cpp"
int main()
{
    SalesPerson s; // Create SalesPerson object s

    s.getSalesFromUser(); // note simple sequential code; there are
    s.printAnnualSales(); // No control statements in main
} // End main
