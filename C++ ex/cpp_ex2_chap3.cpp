// Define a Class with a Member Function
// Define class name GradeBook with member function name displayMessage
// Define Class named GradeBook with member function that takes a parameter

#include <iostream>
#include <string> // Program uses C++ standard string class
using namespace std;

// GradeBook class definition

class GradeBook
{
public: // public is an access specifier -> the function can be called by other functions
    // Member Function that displays a welcome message to the GradeBook
    void displayMessage( string courseName ) // Function name begins with lowercase first letter, then uppercase
    {                                        // type: string, identifier: courseName
        cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
    } // End function displayMessage
}; // End class GradeBook definition

int main()
{
    string nameOfCourse; // String of characters to store the course name. Variable of type String
    GradeBook myGradeBook; // Create a GradeBook object named myGradeBook

    // Input course name
    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse); // Read course name with blanks. Can only use getline with <string> header defined.
    // Cannot use cin << nameOfCourse cause "cin <<" only reads until the 1st white character -> only read the first word/char.
    cout << endl; // Output a blank line

    // Call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage( nameOfCourse );
} // End main
