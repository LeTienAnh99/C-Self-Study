// Figure 9.18: Date.cpp
// Date class member-function definitions
#include <iostream>
#include "Date.h" // Incude defintion of class Date from Date.h
using namespace std;

// Date constructor (should do range checking)
Date::Date( int m, int d, int y )
{
    month = m;
    day = d;
    year = y;
} // End constructor Date

// Print Date in the format mm/dd/yyyy
void Date::print()
{
    cout << month << '/' << day << '/' << year;    
} // End function print