// Figure 9.11: CreateAndDestroy.h
// CreateAndDestroy class definition
// Member-function for this class will be defined later in .cpp file
#include <iostream>
using namespace std;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
public:
    CreateAndDestroy( int, string ); // Constructor for this class
    ~CreateAndDestroy(); // Destructor for this class
private:
    int objectID; // ID number for the object
    string message; // Message that describes the object
};

#endif