// Class Rectangle's member functions definition
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
    length = 1.0;
    width = 1.0;
} // End constructor

// Function to set the width
void Rectangle::setWidth( double w )
{
    if ( w > 0.0 && w < 20.0 )
        width = w;
    else 
        throw invalid_argument ( "Invalid value! Value out of range!" );
} // End function setWidth()

// Function to get the width
double Rectangle::getWidth() const
{
    return width;
} // End function getWidth()

// Function to set the length
void Rectangle::setLength( double l )
{
    if ( l > 0.0 && l < 20.0 )
        length = l;
    else
        throw invalid_argument( "Invalid value! Value out of range!" );
} // End function setLength()

// Function to get the length
double Rectangle::getLength() const
{
    return length;
} // End function getLength()

// Function to calculate the perimeter
double Rectangle::perimeter()
{
    double peri;
    peri = ( length + width ) * 2;
    return peri;
} // End function perimeter

double Rectangle::area()
{
    return length * width;
} // End function area()

void Rectangle::print()
{
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
} // End function print()