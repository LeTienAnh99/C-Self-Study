// Figure 10.15: Time.h
// Cascading member function calls

// Time classs definition
// Member functions of this class is defined in Time.cpp
#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time( int = 0, int = 0, int = 0 ); // Default constructor

    // Set functions (the "Time &" return type enable cascading)
    Time &setTime( int, int, int ); // Set hour, minute, second
    Time &setHour( int ); // Set hour
    Time &setMinute( int ); // Set minute
    Time &setSecond( int ); // Set minute

    // Get functions (normally declared const)
    int getHour() const; // Return hour
    int getMinute() const; // Return minute
    int getSecond() const; // Return second

    // Print functions (normally declared const)
    void printUniversal() const; // Print universal time
    void printStandard() const; // Print standard time
private:
    int hour; // 0 - 23 (24-hr clock format)
    int minute; // 0 - 59 
    int second; // 0 - 59 
}; // End class Time

#endif