// Turn class definition into a Header file for File Reusable
// GradeBook class definition in a separate file from main

#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // Constructor initializes courseName with string supplied as argument
    GradeBook( string name )
    {
        setCourseName( name ); // Call set function to initialize courseName
    } // End GradeBook constructor

   // Function to set the course name
    void setCourseName( string name )
    {
        courseName = name; // Store the course name in the object
    } // End function setCourseName

    // Function to get course name
    string getCourseName()
    {
        return courseName; // Return object's coursenName
    } // End function getCourseName

    // Display a welcome message to the GradeBook user
    void displayMessage()
    {
        // Call getCourseName to get the courseName
        cout << "Welcome to the grade book for\n" << getCourseName()
            << "!" << endl;
    } // End function displayMessage
private:
    string courseName; // Course name for this GradeBook
}; // End class GradeBook definition
