// Figure 4.13: GradeBook.cpp (Class average problem using sentinel-controlled repetition)
// Member-function definitions for class GradeBook that solves the
// class average program with sentinel-controlled repetition
#include <iostream>
#include <iomanip> // Parameterized stream manipulators
#include "GradeBook.h" // Include definition of class GradeBook
using namespace std;

// Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
    setCourseName( name ); // Validate and store courseName
} // End GradeBook constructor

// Function to set the course name;
// Ensure that the course name has at most 25 characters
void GradeBook::setCourseName( string name )
{
    if (name.length() < 25 ) // If name has 25 or fewer characters
        courseName = name; // Store the course name in the object
    else // If less than 25 char
    {
        courseName = name.substr( 0,25 ); // Select first 25 characters
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    } // End if..else
} // End function setCourseName

// Function to retrieve the course name
string GradeBook::getCourseName()
{
    return courseName;
} // End function getCourseName

// Display a welcome message
void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;
} // End function displayMessage

// Determine class average based on 10 grades entered by user
void GradeBook::determineClassAverage()
{
    int total;
    int gradeCounter;
    int grade;
    double average;

    // Initialization phase
    total = 0; // Initialize total
    gradeCounter = 0; // Initialize loop counter

    // Processing phase
    // Input from user
    cout << "Enter grade or -1 to quit: ";
    cin >> grade; // Input grade or sentinel value

    // Loop until sentinel value read from user
    while ( grade != -1 ) // while did not type -1
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        cout << "Enter grade or -1 to quit: ";
        cin >> grade; // Input grade or sentinel value
    } // End while

    // Termination phase
    if ( gradeCounter != 0 ) // If user entered at least one grade...
    {
        // Calculate average of all grade entered
        average = static_cast<double>( total ) / gradeCounter;
        // static_cast<double> is a cast operator, forcing one data type to be converted into another data type
        // Display total and average (with two digits of precision)
        cout << "\nTotal of all " << gradeCounter << " grade entered is: "
            << total << endl;
        cout << "Class average is: " << setprecision( 2 ) << fixed << average
            << endl;
    } // End if
    else // No grades are entered, out put appropriate message
        cout << "No grades were entered" << endl;
}

int main()
{
    // Create GradeBook object myGradeBook and
    // pass course name to constructor
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.determineClassAverage(); //Find average of 10 grades
} // End main
