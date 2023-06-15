// Figure 9.2: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept> // This header is for invalid_argument exception class
#include "Time.h" // Include the definition of class Time from Time.h

using namespace std;

// This Time constructor will initialize each data member to 0
Time::Time()
{
    hour = minute = second = 0; // These are all private data member
} // End Time constructor

// Set new Time value using universal time
void Time::setTime( int h, int m, int s)
{
    // Validate hour, minute and second
    if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) &&
        ( s >= 0 && s < 60 ) )
    {
        hour = h;
        minute = m;
        second = s;
    } // End if
    else 
        throw invalid_argument(
            "hour, minute and/or second was out of range" );
} // End function setTime

// Print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{   // Print out format like: 00:00:00
    cout << setfill('0') << setw( 2 ) << hour << ":"
        << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // End function printUniversal

// Print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":"
        << setfill('0') << setw( 2 ) << minute << ":" << setw( 2 )
        << second << ( hour < 12 ? " AM" : " PM" );
} // End function printStandard

