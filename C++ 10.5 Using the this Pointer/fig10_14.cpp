// Figure 10.14: fig10_14.cpp
// Using the this pointer to refer to object members
#include <iostream>
using namespace std;

class Test
{
public:
    Test( int = 0 ); // Default constructor
    void print() const;
private:
    int x;
}; // End class Test

// Constructor
Test::Test( int value )
    : x( value ) // Initialize x to value
{
    // Empty body
} // End constructor Test

// Print x using implicit and explicit this pointer;
// Note: The parentheses around *this are required
void Test::print() const 
{
    // Implicitly use the this pointer to access the member x
    cout << "        x = " << x;

    // Explicitly use the this pointer and the arrow operator
    // to access the member x
    cout << "\n  this->x = " << this->x;

    // Explicitly use the dereferenced this pointer and
    // the dot operator to access the member x
    cout << "\n(*this).x = " << ( *this ).x << endl;
} // End function print

int main()
{
    Test testObject( 12 ); // Insstantiate and initialize testObject

    testObject.print();
} // End main