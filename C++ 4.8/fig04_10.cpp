// Fig. 4.10: fig04_10.cpp
// Create GradeBook object and invoke its  determineClassAverage funtion
#include "GradeBook.h" // Include definition of class GradeBook

int main()
{
    // Create GradeBook object myGradeBook and
    // pass course name to constructor
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage(); // Display welcome message
    myGradeBook.determineClassAverage(); // Find average of 10 grades
} // End main
