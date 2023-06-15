// Exercise 6.1
// Program to calculate the volume of sphere using function

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double vol; // Volume equation
double sphereVol( double ); // Function prototype

int main()
{
    double r;
    cout << "Enter the sphere radius: ";
    cin >> r;
    cout << "\nThe volume of sphere is: " << sphereVol( r ) << endl;
}

double sphereVol( double radius ) // Declare function sphereVol
{
    vol = (4.0/3.0 * 3.14159 * pow(radius, 3) );
    return vol;
}
