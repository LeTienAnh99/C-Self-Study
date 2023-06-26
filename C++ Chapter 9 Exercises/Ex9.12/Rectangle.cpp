// Class Rectangle's member functions definition
#include <iostream>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle( double x1, double x2, double y1, double y2 )
{
    setCoor( x1, x2, y1, y2 );
} // End constructor

// Function to set the coordinates
void Rectangle::setCoor( double x_1, double x_2, double y_1, double y_2 )
{   
    // Validates for x coordinates
    if ( ( x_1 >= 0.0 && x_1 <= 20.0) && ( x_2 >= 0 && x_2 <= 20.0 ) ) {
        x1 = x_1;
        x2 = x_2;
    } // End if
    else
        throw invalid_argument("Invalid value for x coordinates. Values out of range!");
    
    // Validates for y coordinates
    if ( ( y_1 >= 0.0 && y_1 <= 20.0 ) && ( y_2 >= 0 && y_2 <= 20.0 ) ) {
        y1 = y_1;
        y2 = y_2;
    } // End if
    else 
        throw invalid_argument("Invalid value for y coordinates. Values out of range!");

    // Calculate length, width and verify if the coordinates form a rectangle
    calLength( x1, x2 );
    calWidth( y1, y2 );

    if ( length == width ) {
        isSquareShape = true; // Set the boolean to true
        cout << "The coordinates specifies a Square\n";
    } // End if
    else
        cout << "The coordinates specifies a Rectangle\n";
} // End function setCoor()

// Function to calculate the length
double Rectangle::calLength( double x_1, double x_2 )
{
    length = x_2 - x_1;
    return length;
} // End function calLength()

// Function to calculate width
double Rectangle::calWidth( double y_1, double y_2 )
{
    width = y_2 - y_1;
    return width;
} // End function calWidth()

// Function to calculate the perimeter
double Rectangle::perimeter()
{
    double periOfShape;
    if ( isSquareShape == false ) // Means the shape is rectangle
        periOfShape = ( length + width ) * 2;
    else // isSquareShape == true, means shape is a square
        periOfShape = length * 4;
    
    return periOfShape;
} // End function perimeter

double Rectangle::area()
{
    double areaOfShape;
    if ( isSquareShape == false ) // Means the shape is rectangle
        areaOfShape = length * width;
    else // isSquareShape == true, means shape is a square
        areaOfShape = length * length;
    
    return areaOfShape;
} // End function area()

void Rectangle::print() const
{   
    cout << "x1 is: " << x1 << endl;
    cout << "x2 is: " << x2 << endl;
    cout << "y1 is: " << y1 << endl;
    cout << "y2 is: " << y2 << endl; 
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
} // End function print()