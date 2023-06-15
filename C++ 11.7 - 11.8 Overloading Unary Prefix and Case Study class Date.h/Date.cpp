// Figure 11.7: Date.cpp
// Date class member- and friend-function definitions
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

// Initialize static member; one classwide copy
const int Date::days[] =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date( int month, int day, int year )
{
    setDate( month, day, year );
} // End Date constructor

// Function to set month, day, and year
void Date::setDate( int mm, int dd, int yy )
{
    if (mm >= 1 && mm <= 12 )
        month = mm;
    else 
        throw invalid_argument( "Month must be 1-12" );

    if ( yy >= 1900 && yy <= 2100 )
        year = yy;
    else   
        throw invalid_argument( "Year must be >= 1900 and <= 2100" );

    // Test for a leap year
    if ( ( month == 2 && leapYear( year ) && dd >= 1 && dd <= 29 ) ||
         ( dd >= 1 && dd <= days[ month ] ) )
        day = dd;
    else
        throw invalid_argument( "Day is out of range for current month and year" );

} // End function setDate

// Overloaded prefix increment operator
Date &Date::operator++()
{   // helpIncrement() is a private member-function
    helpIncrement(); // Increment date
    return *this; // Reference return to create an lvalue
} // End function operator++

// Overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Date Date::operator++( int )
{ // temp is a local Date object
    Date temp = *this; // Hold current state of object
    helpIncrement();

    // Return unincremented, saved, temporary object
    return temp; // Value return; not a reference return
} // End function operator++

// Add specified number of days to date
const Date &Date::operator+=( int additionalDays )
{
    for ( int i = 0; i < additionalDays; ++i )
        helpIncrement();

    return *this; // Enables cascading
} // End function operator+=

// If the year is a leap year, return true; otherwise, return false
bool Date::leapYear( int testYear )
{
    if ( testYear % 400 == 0 ||
       ( testYear % 100 != 0 && testYear % 4 == 0 ) )
       return true; // A leap year
    else 
        return false; // Not a leap year
} // End function leapYear

// Determine whether the day is the last day of the month
bool Date::endOfMonth( int testDay ) const
{
    if ( month == 2 && leapYear( year ) )
        return testDay == 29; // Last day of Feb. in leap year
    else 
        return testDay == days[ month ];
} // End function endOfMonth

// Declare function helpIncrement() to help increment the date
void Date::helpIncrement()
{
    // day is not end of month
    if ( !endOfMonth( day ) )
        ++day; // Increment day
    else 
        if ( month < 12 ) // day is end of month and month < 12
        {
            ++month; // Increment month
            day = 1; // First day of new month
        } // End if
        else // Last day of year
        {
            ++year; // Increment year
            month = 1; // First month of new year
            day = 1; // first day of new month
        } // End else
} // End function helpIncrement

// Overloaded output operator
ostream &operator<<( ostream &output, const Date &d )
{
    static string monthName[ 13 ] = { "", "January", "February",
        "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December" };
    output << monthName[ d.month ] << ' ' << d.day << ", " << d.year;
    return output; // Enables cascading
} // End function operator<<
