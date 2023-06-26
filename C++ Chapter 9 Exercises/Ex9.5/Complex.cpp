// Chapter 9: Exercise 9.5: Complex Class
// Member function declaration for class Complex
#include <iostream>
#include "Complex.h"
using namespace std;

// Constructor
Complex::Complex( double realNum, double imaNum )
{
    realPart = realNum;
    imaginaryPart = imaNum;
} // End constructor

// Function getReal() definition
double Complex::getReal()
{
    return realPart;
} // End function getReal()

// Function getIma()
double Complex::getIma()
{
    return imaginaryPart;
} // End function imaginaryPart

// Member function add() definition
void Complex::add( Complex C1, Complex C2 )
{
    realPart = C1.getReal() + C2.getReal();
    imaginaryPart = C1.getIma() + C2.getIma();
} // End member function add

// Member function subtract definition
void Complex::subtract( Complex C1, Complex C2 )
{
    realPart = C1.getReal() - C2.getReal();
    imaginaryPart = C1.getIma() - C2.getIma();
} // End member function substract()

// Member function printNumber to print complex number format
void Complex::printNumber()
{ // a is real part, b is imaginary part
    cout << "Complex number is: " << "( " << realPart << ", " << imaginaryPart << "i" << " )" << endl;
} // End member function printNumber()
