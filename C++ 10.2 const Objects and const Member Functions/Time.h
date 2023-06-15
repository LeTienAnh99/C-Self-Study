// Figure 10.1: Time.h
// Time class definition wth const member functions.
// Member functions will be defined in Time.cpp
#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time( int = 0, int = 0, int = 0 ); // Default constructor

    // Set functions
    void setTime( int, int, int ); // Set time
    void setHour( int ); // Set hour
    void setMinute( int ); // Set minute
    void setSecond( int ); // Set second

    // Get functions (normally declared const)
    int getHour() const; // Return hour
    int getMinute() const; // Return minute
    int getSecond() const; // Return second

    // Print functions (normally declared const)
    void printUniversal() const; // Print universal time
    void printStandard(); // Print standard time (should be const)
private:
    int hour; // 0-23
    int minute; // 0-59
    int second; // 0-59
}; // End class Time

#endif