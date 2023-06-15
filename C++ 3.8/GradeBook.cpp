// Figure 3.16: GradeBook.cpp
// Implementations of the GradeBook member-function definitions
// The setCourseName function performs validation
#include <iostream>
#include "GradeBook.h" // Include definitions of class GradeBook
using namespace std;

// Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // Validate and store courseName
} // End GradeBook constructor

// Function that sets the course name;
// Ensure that the course name has at most 25 characters
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // If name has 25 or fewer characters. name.length is a member-function call just like myGradeBook.displayMessage()
        courseName = name; // Store the course name in the object

    if ( name.length() > 25 ) // If name has more than 25 characters
    { // Use braces {} because there are more than 1 statements
        // Set courseName to first 25 characters of parameter name
        courseName = name.substr( 0, 25 ); // Start at 0, length of 25

        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    } // End if
} // End function setCourseName

// Function to get the course name
string GradeBook::getCourseName()
{
    return courseName; // Return object's courseName
} // End function getCourseName

// Display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
    // Call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" <<endl;
} // End function displayMessage
