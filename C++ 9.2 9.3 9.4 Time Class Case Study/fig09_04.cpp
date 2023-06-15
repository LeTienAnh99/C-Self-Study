// Figure 9.4: fig09_04.cpp
// Demonstrating the class member access operators . and ->
#include <iostream>
using namespace std;

// Class Count definition
class Count
{
public: // public data is dangerous
    // Sets the value of private data member x
    void setX( int value )
    {
        x = value;
    } // End function setX

    // Prints the value of private data member x
    void print()
    {
        cout << x << endl;
    } // End function print
private:
    int x;
}; // End class Count

int main()
{
    Count counter; // Create counter object
    Count *counterPtr = &counter; // Create a pointer to counter
    Count &counterRef = counter; // Create reference to counter

    cout << "Set x to 1 and print using the object's name: ";
    counter.setX( 1 ); // Set data member x to 1
    counter.print(); // Call member function print

    cout << "Set x to 2 and print using a reference to an object: ";
    counterRef.setX( 2 ); // Set data member x to 2
    counterRef.print(); // Call member function print

    cout << "Set x to 3 and print using a pointer to an object: ";
    counterPtr->setX( 3 ); // Set data member x to 3
    counterPtr->print(); // Call member function print
} // End main
