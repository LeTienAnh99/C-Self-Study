// Figure 4.8: GradeBook.h
// Definition of class GradeBook that determines a class average
// Member functions are defined in GradeBook.cpp
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    GradeBook( string ); // Constructor initializes course name
    void setCourseName( string ); // Function to set the course name
    string getCourseName(); // Function to get course name
    void displayMessage(); // Display the message
    void determineClassAverage(); // Averages grades entered by the user
private:
    string courseName; // Course name for this GradeBook
}; // End class GradeBook
