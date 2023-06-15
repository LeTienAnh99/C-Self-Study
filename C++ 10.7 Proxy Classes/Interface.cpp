// Figure 10.23: Interface.cpp
// Implementation of class Interface--client receives this file only
// as precompiled object code, keeping the implementation hidden
#include "Interface.h" // Interface class definition
#include "Implementation.h" // Implementation class definition

// Constructor
Interface::Interface( int v )
    : ptr ( new Implementation( v ) ) // Initialize ptr to point to
                                     // a new Implementation object
{
    // Empty body
} // End Interface constructor

// Call Implemetation's setValue function
void Interface::setValue( int v )
{
    ptr->setValue( v );
} // End function setValue

// Call Implementation's getValue() function
int Interface::getValue() const 
{
    return ptr->getValue();
} // End function getValue

// Destructor
Interface::~Interface()
{
    delete ptr;
} // End ~Interface destructor