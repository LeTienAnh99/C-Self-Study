// Figure 10.8: Date.h
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const int monthsPerYear = 12; // Number of months in a year
    Date( int = 1, int = 1, int = 1900 ); // Default constructor
    void print() const; // Print date in month/day/year format
    ~Date(); // Provided to confirm destruction order
private: 
    int month; // 1-12 (Jan-Decem)
    int day; // 1-31 based on month
    int year; // Any year

    // Utility function to check if day is proper for month and year
    int checkDay( int ) const;
}; // End class Date

#endif