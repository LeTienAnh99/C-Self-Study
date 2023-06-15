// Figure 9.12: CreateAndDestroy.cpp
// CreateAndDestroy class member-function definitions
#include <iostream>
#include "CreateAndDestroy.h" // Inlude the class definition
using namespace std;

// Constructor for the class
CreateAndDestroy::CreateAndDestroy( int ID, string messageString )
{
    objectID = ID; // Set object's ID number
    message = messageString; // Set object's descriptive message

    cout << "Object " << objectID << "   constructor runs  "
        << message << endl;
} // End CreateAndDestroy constructor

// Destructor
CreateAndDestroy::~CreateAndDestroy()
{
    // Output newline for certain objects; helps readability
    cout << ( objectID == 1 || objectID == 6 ? "\n" : "" );

    cout << "Object " << objectID << "   destructor runs   "
        << message << endl;
} // End ~CreateAndDestroy destructor