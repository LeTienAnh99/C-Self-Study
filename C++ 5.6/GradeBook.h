// Figure 5.9: GradeBook.h
// Definition of class GradeBook that counts A, B, C, D, F grades.
// Member functions are defined in GradeBook.cpp
#include <string> // C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    GradeBook( string ); // Constructor initializes the course name
    void setCourseName( string ); // Function to set the course name
    string getCourseName(); // Function to retrieve the course name
    void displayMessage(); // Function to display a welcome message
    void inputGrades(); // Function to input number of grades from user
    void displayGradeReport(); // Function to display a report based on the grades
private:
    string courseName; // Course name for this GradeBook
    int aCount; // Count of A grades
    int bCount; // Count of B grades
    int cCount; // Count of C grades
    int dCount; // Count of D grades
    int eCount; // Count of E grades
    int fCount; // Count of F grades
}; //  End class GradeBook
