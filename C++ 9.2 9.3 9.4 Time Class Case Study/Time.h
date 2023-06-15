// Figure 9.1: Time.h
// Time class definition
// Member functions are defined  in Time.cpp

// These lines prevent multiple inclusions of the header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{
public:
    Time(); // Constructor for this class
    void setTime( int, int, int); // Function to set hour, minute and second
    void printUniversal(); // Function to print tme in universal-time format
    void printStandard(); // Function to print time in standard-time format
private:
    int hour; // 0 - 23 (24-hour clock format)
    int minute; // 0 - 59 
    int second; // 0 - 59
}; // End class Time

#endif