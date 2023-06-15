// Figure 10.13: fig10_13.cpp
// Friends can access private members of a class
#include <iostream>
using namespace std;

// Count class definition
class Count
{
    friend void setX( Count &, int ); // Friend declaration
public:
    // Constructor
    Count()
        : x( 0 ) // Initialize x to 0
    {
        // Empty body
    } // End constructor Count

    // Output x
    void print() const
    {
        cout << x << endl;
    } // End function print
private:
    int x; // Data member
}; // End class Count

// Function setX can modify private data of Count
// Because setX is declared  as a friend of Count (line 9)
void setX( Count &c, int val )
{
    c.x = val; // Allowed because setX is a friend of Count
} // End function setX

int main()
{
    Count counter; // Create a Count object, name counter

    cout << "counter.x after instantiation";
    counter.print();

    setX( counter, 8 ); // Set x using a friend function
    cout << "counter.x after call to setX friend function: ";
    counter.print();
} // End main