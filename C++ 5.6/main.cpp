// Figure 5.11: fig05_11.cpp
// Create GradeBook object, input grades and display grade report
#include "GradeBook.h"

int main()
{
    // Create GradeBook object
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.inputGrades(); // Read grades from user
    myGradeBook.displayGradeReport(); // Display report based on grades
} // End main


