// Figure 5.10: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a switch statement to count A,B,C,D,E,F grades
#include <iostream>
#include "GradeBook.h" // Include definition of class GradeBook
using namespace std;

// Constructor initializes courseName with string supplied as argument;
// Initializes counter data member to 0
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // Validate and store courseName
    aCount = 0; // Initializes count of A grades to 0 (the same for the followings)
    bCount = 0;
    cCount = 0;
    dCount = 0;
    eCount = 0;
    fCount = 0;
} // End GradeBook constructor

// Function to set the course name; limit the  name to 25 or fewer char
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // if name has 25 or fewer char
        courseName = name; // Store the course name in the object
    else
    { // Set courseName to first 25 char
        courseName = name.substr( 0,25 ); // Select first 25 char
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 char.\n" << endl;
    } // End if...else
} // End function setCourseName

// Function to retrieve the course name
string GradeBook::getCourseName()
{
    return courseName;
} // End function getCourseName

// Display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
    // This statement calls getCourseName to get
    // the name of the course this GradeBook represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;
} // End function displayMessage

// Input arbitrary number of grades from user; update grade counter
void GradeBook::inputGrades()
{
    int grade; // Grade e ntered by user

    cout << "Enter the letter grades." << endl
        << "Enter the EOF character to end input." << endl;

    // Loop until user types the end-of-file key
    while ( ( grade = cin.get() ) != EOF ) // cin.get() function reads one char from the keyboard and store in integer variable grade
    {
        // Determine which grade was entered
        switch ( grade ) // Switch statement nested in while
        {
        case 'A' : // Grade was uppercase A
        case 'a' : // Or lowercase a
            ++aCount; // Increment aCount
            break; // Necessary to exit switch

        case 'B' : // Grade was uppercase B
        case 'b' : // Or lowercase b
            ++bCount; // Increment bCount
            break; // Exit switch

        case 'C' : // Grade was uppercase C
        case 'c' : // Grade was lowercase c
            ++cCount; // Increment cCount
            break; // Exit switch

        case 'D' : // Grade was uppercase D
        case 'd' : // Grade was lowercase d
            ++dCount; // Increment dCount
            break; // Exit switch

        case 'E' : // Grade was uppercase E
        case 'e' : // Grade was lowercase e
            ++eCount; // Increment eCount
            break; // Exit switch

        case 'F' : // Grade was uppercase F
        case 'f' : // Grade was lowercase f
            ++fCount; // Increment fCount
            break; // Exit switch

        case '\n' : // Ignore newlines,
        case '\t' : // Tabs,
        case ' ' : // Space in input
            break; // Exit swtich
        default: // Catch all other characters
            cout << "Incorrect letter grade entered."
                << " Enter a new grade." << endl;
            break; // Optional; will exit switch anyway
        } // End switch
    } // End while
} // End function inputGrades

// Display a report based on the grades entered by user
void GradeBook::displayGradeReport()
{
    // Output summary of results
    cout << "\n\nNumber of students who received each letter grade:"
        << "\nA: " << aCount // Display number of A grades
        << "\nB: " << bCount
        << "\nC: " << aCount
        << "\nD: " << aCount
        << "\nE: " << aCount
        << "\nF: " << aCount
        << endl;
} // End function displayGradeReport

int main()
{
    // Create GradeBook object
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.inputGrades(); // Read grades from user
    myGradeBook.displayGradeReport(); // Display report based on grades
} // End main
