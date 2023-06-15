// Figure 4.9: GradeBook.cpp
// Member-functions definitions for class GradeBook that solves
// the class average program with counter-controlled repetition (Number of repetitions is known before the loop executing)
#include <iostream>
#include "GradeBook.h"
using namespace std;

// Constructor initializes courseName with string supplied as argument

GradeBook::GradeBook( string name )
{
    setCourseName( name ); // Validate and store courseName
} // End GradeBook constructor

// Function to set the course name;
// Ensures that the course name has at most 25 characters
void GradeBook::setCourseName( string name )
{
    if ( name.length() <= 25 ) // If name has 25 or fewer characters
        courseName = name; // Store the course name in the project
    else // If name is longer than 25 characters
    { // Set courseName to first 25 characters of parameter name
        courseName = name.substr( 0, 25 ); // Select first 25 characters
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    } // End if...else
} // End function setCourseName

// Function to retrieve the course name
string GradeBook::getCourseName()
{
    return courseName;
} // End function getCourseName()

// Display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for \n" << getCourseName() << "!\n"
        << endl;
} // End function displayMessage()

// Determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage()
{
    int total; // Sum of grades entered by user
    int gradeCounter; //  Number of the grade to be entered next
    int grade; // Grade value entered by user
    int average; // Average of grades

    // Initialization phase
    total = 0; // Initialize total
    gradeCounter = 1; // Initialize loop counter

    // Processing phase
    while ( gradeCounter <= 10 ) // Loop 10 times
    {
        cout << "Enter grade: "; // Prompt for input
        cin >> grade; // Input next grade
        total = total + grade; // Add grade to total
        gradeCounter = gradeCounter + 1; // Increment counter by 1
    } // End while
    // Termination phase
    average = total/10; // Integer division yields integer result

    // Display total and average of grades
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
} // End function determineClassAverage()

// Fig. 4.10: fig04_10.cpp
// Create GradeBook object and invoke its  determineClassAverage function
//#include "GradeBook.h" // Include definition of class GradeBook

int main()
{
    // Create GradeBook object myGradeBook and
    // pass course name to constructor
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.determineClassAverage(); // Find average of 10 grades
} // End main

