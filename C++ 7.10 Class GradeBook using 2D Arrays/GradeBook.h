// Figure 7.22: GradeBook.h
// Definition of class GradeBook that uses a
// 2D arrays to store test grades
// Other member functions are defined later in GradeBook.cpp
#include<string>
using namespace std;

// Definition of class GradeBook
class GradeBook
{
public:
    // Constants
    static const int students = 10; // Number of students (also size of array)
    static const int tests = 3; // Number of tests

    // Constructor to initialize the course name and array of grades
    GradeBook( string, const int [][ tests ] );

    void setCourseName( string ); // Function to set the course name
    string getCourseName(); // Function to get that course name
    void displayMessage(); // Function to display message
    void processGrades(); // This function will do all the grading process
    int getMinimum(); // Find the minimum grade
    int getMaximum(); // Find the maximum grade
    double getAverage( const int [], const int ); // Get student's average
    void outputBarChart(); // Function to draw a bar chart distribution
    void outputGrades(); // Function to show the contents of the grades array
private:
    string courseName; // Course name for this grade book
    int grades[ students ][ tests ]; // 2D array that has size 10 in rows and 3 in columns
}; // End class GradeBook
