// Figure 4.14: fig04_14.cpp
// Create GradeBook object and invoke its determineClassAverage function.
#include "GradeBook.h" // Include definition of class GradeBook

int main()
{
    // Create GradeBook object myGradeBook and
    // pass course name to constructor
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.determineClassAverage(); //Find average of 10 grades
} // End main
