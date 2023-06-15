// Figure 7.16: GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses an array to store test grades
#include<iostream>
#include<iomanip>
#include "GradeBook.h" // GradeBook class definition
using namespace std;

// Constructor initializes courseName and grades array
GradeBook::GradeBook( string name, const int gradesArray[] )
{
    setCourseName( name ); // Initialize courseName

    // Copy grades from gradesArray to grades data member
    for ( int grade = 0; grade < students; ++grade )
        grades[ grade ] = gradesArray[ grade ];
} // End GradeBook constructor

// Function to set the course name
void GradeBook::setCourseName( string name )
{
    courseName = name; // Store the course name
} // End function setCourseName

// Function to retrieve the course name
string GradeBook::getCourseName()
{
    return courseName;
} // End function getCourseName

// Display a welcome message
void GradeBook::displayMessage()
{
    // This statement calls getCourseName() to get the
    // name of the course this GradeBook represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
        << endl;
} // End function displayMessage

// Perform various operations on the data
void GradeBook::processGrades()
{
    outputGrades(); // Output grades array

    // Display average of all grades, minimum and maximum grades
    cout << "\nClass average is " << setprecision( 2 ) << fixed <<
        getAverage() << "\nLowest grade is " << getMinimum() <<
        "\nHighest grade is " << getMaximum() << endl;

        outputBarChart(); // Print grade distribution chart
} // End function processGrades

// Find minimum grade
int GradeBook::getMinimum()
{
    int lowGrade = 100; // Assume lowest grade is 100

    // Loop through grades array
    for ( int grade = 0; grade < students; ++grade )
    {
        // If current grade lower than lowGrade, assign it to lowGrade
        if ( grades[ grade ] < lowGrade )
            lowGrade = grades[ grade ]; // New lowest grade
    } // End for

    return lowGrade; // Return lowest grade
} // End function getMinimum

// Find maximum grade
int GradeBook::getMaximum()
{
    int highGrade = 0; // Assume that highest grade is 0

    // Loop through grades array
    for ( int grade = 0; grade < students; ++grade )
    {
        // If current grade higher than highGrade, assign it to highGrade
        if ( grades[ grade ] > highGrade)
            highGrade = grades[ grade ]; // New highest grade
    } // End for

    return highGrade; // Return highest grade
} // End function getMaximum()

// Determine average grade for test
double GradeBook::getAverage()
{
    int total = 0; // Initialize total

    // Sum grades in array
    for ( int grade = 0; grade < students; ++ grade )
        total += grades[ grade ];

    // Return average of grades
    return static_cast< double >( total ) / students;
} // End function getAverage()

// Output bar chart displaying grade distribution
void GradeBook::outputBarChart()
{
    cout << "\nGrade distribution: " << endl;

    // Stores frequency of grades in each range of 10 grades
    const int frequencySize = 11;
    int frequency[ frequencySize ] = {}; // Initialize elements to 0

    // For each grade, increment the appropriate frequency
    for ( int grade = 0; grade < students; ++grade )
        ++frequency[ grades[ grade ] / students ];

    // For each grade frequency, print bar in chart
    for ( int count = 0; count < frequencySize; ++count )
    {
        // output bar labels ("0-9", ..., "90-99", "100:" )
        if ( count == 0 )
            cout << " 0-9: ";
        else if ( count == 10 )
            cout << " 100: ";
        else
            cout << count * 10 << "-" << ( count * 10 ) + 9 << ": ";

        // Print bar of asterisks
        for ( int stars = 0; stars < frequency[ count ]; ++stars )
            cout << '*';

        cout << endl; // Start a new line of output
    } // End outer for
} // End function outputBarChart()

//Output the contents of th grades array
void GradeBook::outputGrades()
{
    cout << "\nThe grades are:\n";

    // Output each student's grade
    for ( int student = 0; student < students; ++student ) {
        cout << "Student " << setw( 2 ) << (student + 1) << ": " << setw( 3 )
            << grades[ student ] << endl; }
} // End function outputGrades


int main()
{
    // Array of student grades
    int gradesArray[ GradeBook::students ] = { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
    // Use scope resolution operator :: to access class GradeBook's static const students
    GradeBook myGradeBook("CS101 Introduction to C++ programming", gradesArray );
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
} // End main
