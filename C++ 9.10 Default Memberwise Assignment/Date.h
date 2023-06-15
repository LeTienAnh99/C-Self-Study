// Figure 9.17: Date.h
// Date class declaration. Member functions are defined in Date.cpp

// Prevent multiple inclusions of header
#ifndef DATE_H
#define DATE_H

// Class Date definition
class Date
{
public:
    Date( int = 1, int = 1, int = 2000 ); // Default constructor
    void print();
private:
    int month;
    int day;
    int year;
};  // End class Date

#endif