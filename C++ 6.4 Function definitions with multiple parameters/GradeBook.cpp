// Figure 6.4: GradeBook.cpp
// Member-function definitions for class GradeBook that
// Determines he maximum of three grades
#include <iostream>
#include "GradeBook.h"
using namespace std;


// Constructor initializes courseName with string supplied as argument;
// Initializes maximumGrade to 0
GradeBook::GradeBook( string name ) // Create Object GradeBook?
{
    setCourseName( name ); // Validate and store courseName
    maximumGrade = 0; // This value will be replaced by the maximum grade
} // End GradeBook constructor

// Function to set the course name; limits name to 25 or fewer chars
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // If name has 25 of fewer chars
        courseName = name; // Store the course name in the object
    else
    {
        courseName = name.substr( 0,25 ); // Select first 25 chars
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 chars.\n" << endl;
    } // End if...else
} // End function setCourseName

string GradeBook::getCourseName()
{
    return courseName;
} // End function getCourseName

// Display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
    // This statement calls getCourseName to get the
    // name of the course this GradeBook represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;
} // End function displayMessage


// Input three grades from user; determine maximum
void GradeBook:: inputGrades()
{
    int grade1; // First grade entered by user
    int grade2; // Second grade entered by user
    int grade3; // Third grade entered by user

    cout << "Enter three integer grades: ";
    cin >> grade1 >> grade2 >> grade3;

    // Store maximum in member maximumGrade
    maximumGrade = maximum( grade1, grade2, grade3 );
} // End function inputGrades

// Returns the maximum of its three integer parameters
int GradeBook::maximum( int x, int y, int z )
{ // The whole idea is to assume one var to be maximum, then compare and set new maximum
    int maximumValue = x; // Assume x is the largest to start

    // Determine whether y is greater than maximumValue
    if ( y > maximumValue )
        maximumValue = y; // Make y the new maximumValue

    if ( z > maximumValue )
        maximumValue = z; // Make z the new maximumValue

    return maximumValue;
} // End function maximum

// Display a report based on the grades entered by user
void GradeBook::displayGradeReport()
{
    // Output maximum of grades entered
    cout << "Maximum of grades entered: " << maximumGrade << endl;
} // End function displayGradeReport

// Fig 6.5: fig06_05.cpp
// Create GradeBook object, input grades and display grade report
// #include "GradeBook.h"

int main()
{
    // Create GradeBook object
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.inputGrades(); // Read grades from user
    myGradeBook.displayGradeReport(); // Display report based on grades
} // End main
