// Figurer 7.17: fig07_17.cpp
// Creates GradeBook object using an array of grades.
#include "GradeBook.h" // GradeBook class definition
#include <iostream>
// Begin execution
int main()
{
    // Array of student grades
    int gradesArray[ GradeBook::students ] =
        { 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
    // Use scope resolution operator :: to access class GradeBook's static const students
    GradeBook myGradeBook(
        "CS101 Introduction to C++ programming", gradesArray );
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
} // End main
