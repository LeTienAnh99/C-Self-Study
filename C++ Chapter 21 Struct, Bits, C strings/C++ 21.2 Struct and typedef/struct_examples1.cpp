// Struct example 1
// structure to calculate area of a rectangle
#include <iostream>
using namespace std;

struct Rectangle {
    int width, height;
}; 

int main()
{
    struct Rectangle rec; // rec is an instance of struct Rectangle
    rec.width = 8;
    rec.height = 5;
    cout << "Area of the rectangle: " << ( rec.width * rec.height ) << endl;
}