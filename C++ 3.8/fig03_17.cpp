// Figure 3.17: fig03_17.cpp
// Create and manipulate a GradeBook object; illustrate validation
#include <iostream>
#include "GradeBook.h" // Include definition of class GradeBook
using namespace std;

// Function main() begins program execution
int main()
{
    // Create two GradeBook objects;
    // Initial course name of gradeBook1 is too long
    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 C++ Data Structures");

    // Display each GradeBook's courseName
    cout << "gradeBook1's initial course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's initial course name is: "
        << gradeBook2.getCourseName() << endl;

    // Modify myGradeBook's courseName (with a valid-length string)
    gradeBook1.setCourseName("CS101 C++ Programming");

    // Display each GradeBook's courseName
    cout << "\ngradeBook1's course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's course name is: "
        << gradeBook2.getCourseName() << endl;
} // End main
