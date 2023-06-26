// Chapter 9: Exercise 9.12
// Class Rectangle Enhancement using Cartesians Coordinates
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle 
{
public:
    Rectangle( double = 0, double = 0, double = 0, double = 0 ); // Default constructor
    
    void setCoor( double, double, double, double ); // Function to set the coordinates
    double calLength( double, double );
    double calWidth( double, double );
    double perimeter();
    double area();
    void print() const; // Print length, width values
    bool isSquareShape = false; // Function to check the square shape
private:
    double length;
    double width;
    double x1, x2, y1, y2; // Coordinates
};

#endif