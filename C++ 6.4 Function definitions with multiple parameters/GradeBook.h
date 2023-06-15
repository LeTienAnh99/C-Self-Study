// Figure 6.3: GradeBook.h
// Definition of class GradeBook that finds the maximum of three grades
// Member functions are later defined in GradeBook.cpp
#include <string> // Program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    GradeBook( string ); // Constructor initializes the course name
    void setCourseName( string ); // Function to set the course name
    string getCourseName(); // Function to retrieve the course name
    void displayMessage(); // Function to display a welcome message
    void inputGrades(); // Function to input grades from user
    void displayGradeReport(); // Function to display a report based on the grades
    int maximum( int, int , int ); // Function to determine max of 3 values
private:
    string courseName; // The course name for this GradeBook
    int maximumGrade; // Maximum of three grades
}; // End class GradeBook
