// Chapter 9: Exercise 9.11
// Class Rectangle
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle 
{
public:
    Rectangle(); // Default constructor
    
    double perimeter();
    double area();
    void setWidth( double ); // Function to set the width of rectangle
    void setLength( double ); // Function to set the length of rectangle
    double getWidth() const; // Function to get the width
    double getLength() const; // Function to get the length
    void print(); // Print length, width values
private:
    double length;
    double width;
};

#endif