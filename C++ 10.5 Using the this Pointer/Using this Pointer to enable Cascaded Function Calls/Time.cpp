// Figure 10.16: Time.cpp
// Tme class member-function definitions
#include <iostream>
#include <iomanip>
#include "Time.h" // Time class definition
using namespace std;

// Constructor member function to initialize private data;
// Calls member function setTime to set variables;
// Default values are 0 (see the class definition in Time.h)
Time::Time( int hr, int min, int sec )
{
    setTime( hr, min, sec );
} // End Time constructor

// Set values for hour, minute, second
Time &Time::setTime( int h, int m, int s ) // Note "Time &" return
{
    setHour( h );
    setMinute( m );
    setSecond( s );
    return *this; // Enables cascading
} // End function setTime

// Set hour value
Time &Time::setHour( int h ) // Note "Time &" return
{
    if ( h >= 0 && h < 24 )
        hour = h; // hour is a private data member
    else 
        throw invalid_argument( "Hour must be 0-23" );

    return *this; // Enable cascading
} // End function setHour

// Set minute value
Time &Time::setMinute( int m ) // Note "Time &" return
{
    if ( m >= 0 && m < 60 )
        minute = m; // minute is a private data member
    else 
        throw invalid_argument( "Minute must be 0-59" );
    
    return *this; // Enable cascading
} // End function setMinute

// Set second value
Time &Time::setSecond( int s ) // Note "Time &" return
{
    if ( s >= 0 && s < 60 )
        second = s; // second is a private data member
    else 
        throw invalid_argument( "Second must be 0-59" );
    
    return *this; // Enables cascading
} // End function setSecond

// Get hour value
int Time::getHour() const
{
    return hour;
} // End function getHour

// Get minute value
int Time::getMinute() const
{
    return minute;
} // End function getMiute

// Get second value 
int Time::getSecond() const
{
    return second;
} // End function getSecond

// Print universal time
void Time::printUniversal() const
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
        << setw( 2 ) << minute << ":" << setw( 2 ) << second;
} // End function printUniversal

// Print standard time
void Time::printStandard() const
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
        << ":" << setfill( '0' ) << setw( 2 ) << minute << ":" << setw( 2 ) 
        << second << ( hour < 12 ? " AM" : " PM" );
} // End function printStandard