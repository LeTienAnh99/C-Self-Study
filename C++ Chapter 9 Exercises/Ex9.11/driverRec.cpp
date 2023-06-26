// Driver program for class Rectangle
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rec1;
    Rectangle rec2;

    cout << "Rec1 width and length are: " << endl;
    rec1.print();
    
    cout << "Rec2 width and length are: " << endl;
    rec2.print();

    // Set sizes, calculate perimeter and are, then display values of rec1
    cout << "\nSet new length and width for rec1:" << endl;
    rec1.setLength( 2 );
    rec1.setWidth( 3 );
    rec1.print();

    cout << "\nPerimeter of rec1: " << rec1.perimeter() << endl;
    cout << "Area of rec1: " << rec1.area() << endl;
} // End main