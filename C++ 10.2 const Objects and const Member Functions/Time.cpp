// Figure 10.2: Time.cpp
// Time class member-function definitions
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h" // Include definition of class Time
using namespace std;

// Constructor function to initialize private data;
// Calls member function setTime to set variables;
// default values are 0 (see class definition)
Time::Time( int hour, int minute, int second )
{
    setTime( hour, minute, second );
} // End Time constructor

// Set hour, minute, second values
void Time::setTime( int hour, int minute, int second )
{ // Function setTime call 3 functions setHour, setMinute, setSecond
    setHour( hour );
    setMinute( minute );
    setSecond( second ); 
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

// Function to return hour value
int Time::getHour() const // Get functions should be const
{
    return hour;
} // End function getHour

// Function to return minute value
int Time::getMinute() const 
{
    return minute;
} // End function getMinute

// Function to return second value
int Time::getSecond() const 
{
    return second;
} // End function getSecond

// Print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
        << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // End fimctopm printUniversal

// Print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() // This function wont use const, to demonstrate the difference
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minute
        << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM" );
} // End function printStandard