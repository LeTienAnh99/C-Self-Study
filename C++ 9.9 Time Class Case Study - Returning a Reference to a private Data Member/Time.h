//// Figure 9.14: Time.h
// Time class declaration.
// Member functions defined in Time.cpp

// Prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time( int = 0, int = 0, int = 0 );
    void setTime( int, int, int );
    int getHour();
    int &badSetHour( int ); // DANGEROUSE reference return
private:
    int hour;
    int minute;
    int second;
}; // End class Time

#endif