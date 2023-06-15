// Figure 11.6: Date.h
// Date class definition with overloaded increment operators.
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
    friend ostream &operator<<( ostream &, const Date & );
public:
    Date( int m = 1, int d = 1, int y = 1900 ); // Default constructor
    void setDate( int, int, int ); // Set month, day. year
    Date &operator++(); // Prefix increment operator
    Date operator++( int ); // Postfix increment operator
    const Date &operator+=( int ); // Add days, modify object
    static bool leapYear( int ); // Is date in a leap year?
    bool endOfMonth( int ) const; // Is date at the end of month
private:
    int month;
    int day;
    int year;

    static const int days[]; // Array of days per month
    void helpIncrement(); // Utility function for incrementing date
}; // End class Date
#endif