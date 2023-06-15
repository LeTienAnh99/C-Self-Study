// Section 3.7
// Defining a Class's Interface with Function Prototypes
// This file presents GradeBook's public interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp

#include <string>
using namespace std;
// GradeBook class definition
class GradeBook
{
public:
    GradeBook( string ); // Constructor that initializes courseName
    void setCoursename( string ); // Function that sets the course name
    string getCourseName(); // Function that gets the course name
    void displayMessage(); // Function that displays a welcome message
private:
    string courseName; // Course name for this GradeBook
}; // End class definition
