// This file and GradeBook.h belongs to the same ex5 from chap 3
// Including class GradeBook from file GradeBook.h for use in main
#include <iostream>
#include "GradeBook.h" // Include definition of class GradeBook
using namespace std;

// Function main begins program execution
int main()
{
    // Create 2 GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structure in C++");

    // Display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
} // end main
