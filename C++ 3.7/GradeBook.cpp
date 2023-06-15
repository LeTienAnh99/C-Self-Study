// Section 3.7 continue. Member-function definitions
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h
#include <iostream>
#include "GradeBook.h> // Include definition of class GradeBook
using namespace std;

// Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // Call set function to initialize courseName
} // End GradeBook constructor

// Function to set the course name
void GradeBook::setCoursename( string name )
{
    courseName = name; // Store the course name in the object
} // End function setCourseName()

// Function to get the course name
string GradeBook::getCourseName()
{
    return courseName; // Return object's courseName
} // End function getCourseName()

// Display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
    // Call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
} // End function displayMessage
