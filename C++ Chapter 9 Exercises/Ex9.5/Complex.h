// Chapter 9: Exercise 9.5: Complex Class

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <math.h>
using namespace std;

class Complex 
{
public:
    Complex( double = 0, double = 0 ); // Default Constructor    
    double getReal(); // Function to get the real part of complex number
    double getIma(); // Function to get the imaginary part of complex number
    void add( Complex, Complex ); 
    void subtract( Complex, Complex );
    void printNumber();
private:
    double realPart;
    double imaginaryPart;
    //const double i = sqrt( -1 );
    // double totalReal, totalIma;
    // double subtractReal, subtractIma;
}; // End class Complex

#endif