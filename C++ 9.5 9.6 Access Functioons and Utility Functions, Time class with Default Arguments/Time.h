// Figure 9.8: Time.h
// Time class contains a constructor with default arguments.
// Member functions will be defined later in Time.cpp

// This line prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time abstract data type definition
class Time
{
public:
    Time( int = 0, int = 0, int = 0 ); // default constructor

    // Set member functions
    void setTime( int, int, int ); // Set hour, minute, second
    void setHour( int ); // Set hour (after validation)
    void setMinute( int ); // Set minute (after validation)
    void setSecond( int ); // Set second (after validation)

    // Get functions
    int getHour(); // Return hour
    int getMinute(); // Return minute
    int getSecond(); // Return second

    void printUniversal(); // Print time in universal format
    void printStandard(); // Print time in standard format
private:
    int hour; // 0 - 23 (24-hour clock format)
    int minute; // 0 - 59 
    int second; // 0 - 59
}; // End class Time definition

#endif