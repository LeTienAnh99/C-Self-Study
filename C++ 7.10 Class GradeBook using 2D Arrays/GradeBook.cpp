// Figure 7.23: GradeBook.cpp
// Member-function definition for the class GradeBook
// The class uses 2D array to store grades
#include<iostream>
#include<iomanip> // Parameterized stream manipulators
using namespace std;

// MUST include the definition of class GradeBook: GradeBook.h
#include "GradeBook.h"

// Two-argument constructor initializes the course name variable: courseName, and grades array
GradeBook::GradeBook( string name, const int gradesArray[][ tests ] )
{ // name, gradesArray are defined in this file, follow the class rule defined in GradeBook.h
    setCourseName( name ); // Initializes the course name for variable courseName

    // Copy grades from gradeArray to 2D array "grades[][]"
    for ( int student = 0; student < students; ++student )
    {
        for ( int test = 0; test < tests; ++test )
            grades[ student ][ test ] = gradesArray[ student ][ test ];
    } // End two-argument GradeBook constructor
}
// Function to set the course name
void GradeBook::setCourseName( string name )
{
    courseName = name; // Store the course name
} // End function setCourseName

// Function to get the course name
string GradeBook::getCourseName()
{
    return courseName;
} // End function getCourseName

// Display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
    // This statement calls function getCourseName() to get
    // the course name above
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
        << endl;
} // End function displayMessage()

    // Now function processGrades() will do all the grade stuffs
void GradeBook::processGrades()
{
    outputGrades(); // Output grades array, this will be defined later

    // Call functions getMinimum() and getMaximum() to calculate min. max
    cout << "\nLowest grade in the grade book is: " << getMinimum()
        << "\nHighest grade in the grade book is: " << getMaximum() << endl;

        outputBarChart(); // Call this function to display bar chart distribution
} // End function processGrades()

// Define function getMinimum()
int GradeBook::getMinimum()
{
    int lowGrade = 100; // Assume the lowest grade is 100

    // Loop through rows of grades[][] array
    for ( int student = 0; student < students; ++student )
    {
        // Loop through columns of current row
        for ( int test; test < tests; ++test )
        {
            // If current grade less than lowGrade, assign it to lowGrade
            if ( grades[ student ][ test ] < lowGrade )
                    lowGrade = grades[ student ][ test ]; // New lowest grade
        } // End inner for
    } // End outer for

    return lowGrade; // Return lowest grade
} // End function getMinimum()

// Define function getMaximum()
int GradeBook::getMaximum()
{
    int highGrade = 0; // Assume the highest grade is 0

    // Loop through rows of grades[][] array
    for ( int student = 0; student < students; ++student )
    {
        // Loop through columns of current row
        for ( int test = 0; test < tests; ++test )
        {
            // If current grade greater than highGrade, assign it to highGrade
            if ( grades[ student ][ test ] > highGrade )
                highGrade = grades[ student ][ test ]; // New highest grade
        } // End inner for
    } // End outer for

    return highGrade; // Return the highest grade
} // End function getMaximum()

// Define function getAverage()
double GradeBook::getAverage( const int setOfGrades[], const int grades )
{
    int total = 0; // Initialize the initial total to 0

    // Sum grades in array
    for ( int grade = 0; grade < grades; ++grade )
        total += setOfGrades[ grade ];

    // Return the average of grades
    return static_cast< double >( total ) / grades;
} // End function getAverage

// Define function outputBarChart()
void GradeBook::outputBarChart()
{
    cout << "\nOverall grade distribution:" << endl;

    // Stores frequency of grades in each range of 10 grades
    const int frequencySize = 11;
    int frequency[ frequencySize ] = {}; // Initialize all elements to 0

    // For each grade, increment the appropriate frequency
    for ( int student = 0; student < students; ++student ) {

        for ( int test = 0; test < tests; ++test )
                ++frequency[ grades[ student ][ test ] / 10 ];
    }
    // For each grade frequency, print bar chart
    for ( int count = 0; count < frequencySize; ++count )
    {

        // Output bar label ("0-9", "10-19", ..., "100:" )
        if ( count == 0 )
            cout << "  0-9: ";
        else if ( count == 10 )
            cout << "  100: ";
        else
            cout << count * 10 << "-" << ( count *10 ) + 9 << ": ";
        // Print bar of asterisks
        for ( int stars = 0; stars < frequency[ count ]; ++stars )
            cout << '*';

        cout << endl; // Start a new line of output
    } // End outer for
} // End function outputBarChart

// Define the function outputGrades()
void GradeBook::outputGrades()
{
    cout << "\nThe grades are:\n\n";
    cout << "            "; // Align column heads

    // Creates a column heading for each of the tests
    for ( int test = 0; test < tests; ++test )
        cout << "Test " << test + 1 << " ";

    cout << "Average" << endl; // Student average column heading

    // Creates rows/columns of text representing array grades
    for ( int student = 0; student < students; ++student )
    {
        cout << "Student " << setw( 2 ) << student + 1;

        // Output student's grades
        for ( int test = 0; test < tests; ++test ) {
            cout << setw( 8 ) << grades[ student ][ test ]; }

        // Call member function getAverage() to calculate student's average;
        // Pass row of grades and the value of tests as the arguments
        double average = getAverage( grades[ student ], tests );
        cout << setw( 9 ) << setprecision( 2 ) << fixed << average << endl;
    } // End outer for
} // End function outputGrades

// Figure 7.24: fig07_24.cpp
// Creates GradeBook object using a 2D array of grades

// Function main begins program execution
int main()
{
    // 2D array of student grades
    int gradesArray[ GradeBook::students ][ GradeBook::tests ] =
    { {87,96,70},{68,87,90}, {94,100,90}, {100,81,82}, {83,65,85}, {78,87,65}, {85,75,83}, {91,94,100}, {76,72,84}, {87,93,73} };

    GradeBook myGradeBook( "CS101 Introduction to C++ Programming", gradesArray );
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
} // End main
