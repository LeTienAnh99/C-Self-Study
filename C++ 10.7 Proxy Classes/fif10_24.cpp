// Figure 10.24: fig10_24.cpp
// Hiding a class's private data with a proxy class
#include <iostream>
#include "Interface.h" // Interface class definition
#include "Interface.cpp"
using namespace std;

int main()
{
    Interface i( 5 ); // Create Interface object

    cout << "Interface contains: " << i.getValue()
        << " before setValue" << endl;
    
    i.setValue( 10 );
    cout << "Interface contains: " << i.getValue()
        << " after setValue" << endl;
} // End main