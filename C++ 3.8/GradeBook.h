// Figure 3.15: GradeBook.h
// GradeBook class definition presents the public interface of
// the class. Member-function definitions appear in  GradeBook.cpp
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    GradeBook( string ); // Constructor that initializes a GradeBook object
    void setCourseName( string ); // Function that sets the course name
    string getCourseName(); // Function that gets the course name
    void displayMessage(); // Function that displays the message
private:
    string courseName; // Course name for this GradeBook
}; // End class GradeBook
