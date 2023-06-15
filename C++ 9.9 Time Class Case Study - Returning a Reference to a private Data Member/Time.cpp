// Figure 9.15: Time.cpp
// Time class member-function definitions
#include <stdexcept>
#include "Time.h" // Include the definition of class Time
using namespace std;

// Constructor function to initialize private data; calls member function
// Function setTime to set variables; default values are 0 (see class definition)
Time::Time( int hr, int min, int sec )
{
    setTime( hr, min, sec );
} // End Time constructor

// Set values of hour, minute and second
void Time::setTime( int h, int m, int s )
{
    // Validate hour, minute, second
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

// Return hour value
int Time::getHour()
{
    return hour;
} // End function getHour(

// POOR PRACTICE: Returning a reference to a private data member
int &Time::badSetHour( int hh )
{
    if ( hh >= 0 && hh < 24 )
        hour = hh;
    else
        throw invalid_argument( "hour must be 0-23" );

    return hour; // DANGEROUS reference return
} // End function badSetHour
