// Figure 9.9: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept> // Include to use invalid_argument exception class
#include "Time.h" // Include definition of class Time.h
using namespace std;

// Time constructor initializes each data member to zero
Time::Time( int hour, int minute, int second )
{ // Call function setTime to validate and set time
    setTime( hour, minute, second ); // Validate and set time
} // End Time constructor

// Set new Time value using universal time
void Time::setTime( int h, int m, int s )
{ // This function calls 3 set functions to set the time
    setHour( h ); // Set private field hour
    setMinute( m ); // Set private field minute
    setSecond( s ); // Set private field second
} // End function setTime

// Set hour value
void Time::setHour( int h )
{
    if ( h >= 0 && h < 24 )
        hour = h;
    else 
        throw invalid_argument( "hour must be 0-23" );
} // End function setHour

// Set minute value
void Time::setMinute( int m )
{
    if ( m >= 0 && m < 60 )
        minute = m;
    else
        throw invalid_argument( "minute must be 0-59" );
} // End function setMinute

// Set second value
void Time::setSecond( int s )
{
    if ( s >= 0 && s < 60 )
        second = s;
    else 
        throw invalid_argument( "second must be 0-59" );
} // End function setSecond

// Declare function gethour()
int Time::getHour()
{
    return hour;
} // End function getHour

// Declare function getMinute()
int Time::getMinute()
{
    return minute;
} // End function getMinute

// Declare function getSecond()
int Time::getSecond()
{
    return second;
} // End function getSecond

// Print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard()
{
    cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
        << ":" << setfill('0') << setw( 2 ) << getMinute()
        << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM " );
}

// Print Time in universal-time format (HH:MM:SS)
void Time::printUniversal()
{
    cout << setfill('0') << setw( 2 ) << getHour() << ":"
        << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // End function printUniversal