// Figure 10.9: Date.cpp
// Date class member-function definitions.
#include <iostream>
#include <stdexcept>
#include "Date.h" // Include Date class definition
using namespace std;

// Constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day 
Date::Date( int mn, int dy, int yr )
{
    if ( mn > 0 && mn <= monthsPerYear ) // Validate the month
        month = mn;
    else 
        throw invalid_argument( "month must be 1-12" );
    
    year = yr; // Could validate yr
    day = checkDay( dy ); // Validate the day

    // Output Date object to show when its constructor is called
    cout << "Date object constructor for date ";
    print();
    cout << endl;
} // End Date constructor

// Print Date object in form month/day/year
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
} // End function print

// Output Date
Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
} // End ~Date destructor

// Utility function to confirm proper day value based on
// month and year; handles leap years, too
int Date::checkDay( int testDay ) const
{
    static const int daysPerMonth[ monthsPerYear + 1 ] = 
        { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    // Determine whether testDay is valid for specified month (array above)
    if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
        return testDay;
    
    // February 29 check for leap year
    if ( month == 2 && testDay == 29 && ( year % 400 == 0 ||
       ( year % 4 == 0 && year % 100 != 0 ) ) )
       return testDay;
    throw invalid_argument( "Invalid day for current month and year" );
} // End function checkDay