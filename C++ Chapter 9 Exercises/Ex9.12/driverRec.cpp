// Exercise 9.12
// Driver program for class Rectangle Enhance
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rec1( 0.0, 5.0, 2.0, 12.0 );
    Rectangle rec2( 2.0, 4.0, 2.0, 4.0 );
    Rectangle rec3;

    cout << "Rec1 components are: " << endl;
    rec1.print();
    
    cout << "Rec2 components are: " << endl;
    rec2.print();

    cout << "Rec3 components are:" << endl;
    rec3.print();

    // Calculate perimeter and area, then display values of rec1

    cout << "\nPerimeter of rec1: " << rec1.perimeter() << endl;
    cout << "Area of rec1: " << rec1.area() << endl;

    cout << "\nPerimeter of rec2: " << rec2.perimeter() << endl;
    cout << "Area of rec1: " << rec2.area() << endl;

    cout << "\nPerimeter of rec3: " << rec3.perimeter() << endl;
    cout << "Area of rec1: " << rec3.area() << endl;
} // End main