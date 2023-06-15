// Figure 6.22: fig06_22.cpp
// Using default arguments
#include <iostream>
using namespace std;

// Function prototype that specifies default arguments
int boxVolume( int length = 1, int width = 1, int height = 1 );

int main()
{
    // No arguments--use default values for all dimensions
    cout << "The default box volume is: " << boxVolume();

    // Specify length, while width and height is default
    cout << "\n\nThe volume of a box with length = 10,\n"
        << "width 1 and height 1 is: " << boxVolume( 10 );

    // Specify length and width; default height
    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 1 is: " << boxVolume( 10,5 );

    // Specify all arguments
    cout << "\n\nThe volume of a box with length 10,\n"
        << "width 5 and height 2 is: " << boxVolume( 10,5,2 )
        << endl;
} // End main
// Declare function boxVolume to calculate the volume of the box
// *Remember to do this step otherwise the function is not recognize
int boxVolume( int length, int width, int height )
{
    return length * width * height;
} // End function boxVolume
