//Define a Class with a Member Function
//Define class name GradeBook with member function name displayMessage

#include <iostream>

using namespace std;

//GradeBook class definition
class GradeBook
{
public:
    //function which displays a welcome message to the Gradebook user
    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    } //End function displayMessage
}; // End class GradeBook

// Function main begins program execution
int main()
{
    GradeBook myGradeBook; // Create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // Call object's displayMessage function

} // End main()
