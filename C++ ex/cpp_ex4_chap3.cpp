// Initialize Object with Constructor
// Instantiating multiple objects of the GradeBook class and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created

#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // Constructor initializes courseName with string supplied as argument
    GradeBook ( string name ) // Constructor must be the same name as Class
    {
        setCourseName( name ); // Call set function to initialize courseName
    } // End GradeBook constructor

    // Function to set the course name
    void setCourseName( string name )
    {
        courseName = name;
    } // End function setCourseName

    // Function to get the course name
    string getCourseName()
    {
        return courseName;
    } // End function getCourseName

    // Function that displays welcome message to the GradeBook user
    void displayMessage()
    {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // End function displayMessage

private:
    string courseName;
}; // End class GradeBook

int main()
{
    // Create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2("CS101 Data Structures in C++" );

    // Display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
} // End main
