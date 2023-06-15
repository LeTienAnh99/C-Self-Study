// Figure 15.4: fig15_04.cpp
// Using member function get, put and eof
#include <iostream>
using namespace std;

int main()
{
    int character; // Use int, because char cannot represent EOF

    // Prompt user to read each character; use put to display it
    cout << "Before input, cin.eof() is " << cin.eof() << endl  
        << "Enter a sentence followed by end-of-file:" << endl;
    
    while ( ( character = cin.get() ) != EOF )
        cout.put( character );
    // Means: get the character until end of file, if EOF, stop    
    
    // Display end-of-file character
    cout << "\nEOF in this system is: " << character << endl;
    cout << "After input of EOF, cin.eof() is " << cin.eof() << endl;
}