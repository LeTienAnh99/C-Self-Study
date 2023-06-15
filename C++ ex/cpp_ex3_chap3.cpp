// Define a class GradeBook that contains a courseName data member
// and member function to set and get its value through function call;
// Create and manipulate a GradeBook object with these functions.

#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public: // "access specifier" -> can be called by other functions
    // Function that sets the course name
    void setCourseName( string name ) // name is called "parameter"
    {
        courseName = name; // Store the course name in the object. Here it is the class object
    } // End function setCourseName (this function only)

    // Function that gets the course name
    string getCourseName()
    {
        return courseName; // Return the object's courseName
    } // End function getCourseName

    // Function that displays a welcome message
    void displayMessage()
    {
        // This statement calls getCourseName to get the
        // name of the course this GradeBook represents
        cout << "Welcome to the grade book for\n" << getCourseName() << endl;
    } // End function display Message

private: // "access specifier"
    string courseName; // Course name for this GradeBook. Here is a data member
}; // End class GradeBook

// Function main begins program execution
int main()
{
    string nameOfCourse; // Variable to store the course name
    GradeBook myGradeBook; // Create a GradeBook object name myGradeBook

    // Display initial value of courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    // Input and set course name
    cout << "\nPlease enter course name: " << endl;
    getline( cin, nameOfCourse ); // Read a course name with blanks
    myGradeBook.setCourseName( nameOfCourse ); // Set the course name. In this line, nameOfCourse is a function's argument

    cout << endl; // Outputs a blank line
    myGradeBook.displayMessage(); // Display message with new course name

} // End main
