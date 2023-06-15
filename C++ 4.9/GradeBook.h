// Figure 4.12: GradeBook.h
// Definition of class GradeBook that determines a class average
// (Member-functions are defined in GradeBook.cpp
#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook( string ); // Constructor initializes course name
    void setCourseName( string ); // Function to set course name
    string getCourseName(); // Function to get course name
    void displayMessage(); // Function to display the message
    void determineClassAverage(); // Average grades entered by the user
private:
    string courseName; // Course name for this GradeBook
}; // End class GradeBook

