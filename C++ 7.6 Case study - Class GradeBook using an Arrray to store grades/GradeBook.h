// Figure 7.15: GradeBook.h
// Definition of class GradeBook that uses an array to store test grades
// Member functions are LATER defined in GradeBook.cpp
#include<iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // Constant -- number of students who took the test
    static const int students = 10; // note public data

    // This line indicate that the data wont be changed
    GradeBook( string, const int[] ); // Constructor initializes the course name and array of grades

    void setCourseName( string ); // Function to set the course name
    string getCourseName(); // Function to retrieve the course name
    void displayMessage();
    void processGrades(); // Perform various operations on the grade data
    int getMinimum(); // Find the minimum grade for the test
    int getMaximum(); // Find the maximum grade for the test
    double getAverage(); // Determine the average grade for the test
    void outputBarChart(); // Output bar chart of grade distribution
    void outputGrades(); // Output the contents of the grades array
private:
    string courseName; // Course name for this grade book
    int grades[ students ]; // Array of student grades
}; // End class GradeBook
