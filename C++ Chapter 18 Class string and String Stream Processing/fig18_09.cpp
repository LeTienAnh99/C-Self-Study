// Figure 18.9: fig18_09.cpp
// Converting to C-style strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string1( "STRINGS" ); // String constructor with char* arg
    const char *ptr1 = 0; // Initialize *ptr1
    int length = string1.length();
    char *ptr2 = new char[ length + 1 ]; // Including null

    // Copy characters from string1 into allocated memory
    string1.copy( ptr2, length, 0 ); // Copy string1 to ptr2 char*; 0 is position 0
    ptr2[ length ] = '\0'; // Add null terminator

    cout << "string string1 is " << string1
        << "\nstring1 converted to a C-style string is "
        << string1.c_str() << "\nptr1 is ";

    // Assign to pointer ptr1 the const char * returned by
    // function data(). NOTE: this is a potentially dangerous
    // assignment. If string1 is modified, pounter ptr1 can 
    // become invalid
    ptr1 = string1.data();

    // Output each character using pointer
    for ( int i = 0; i < length; ++i )
        cout << *( ptr1 + i ); // Use pointer arithmetic

    cout << "\nptr2 is " << ptr2 << endl;
    delete [] ptr2; // Reclaim dynamically allocated memory
} // End main