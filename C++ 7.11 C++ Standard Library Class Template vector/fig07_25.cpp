// Figure 7.25: fig07_25.cpp
// Demonstrating C++ vector
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

void outputVector( const vector< int > & ); // Display the vector
void inputVector( vector< int > & ); // Input values into the vector

int main()
{   // Create vector object that store value of type int. By the fault, all elements are set to 0
    vector< int > integers1( 7 ); // 7-element vector< int >
    vector< int > integers2( 10 ); // 10-element vector< int >

    // Print integers1 size and contents
    cout << "Size of vector integers1 is: " << integers1.size() // Vector member function size
        << "\nvector after initialization: " << endl;
    outputVector( integers1 );

    // Print integers2 size and contents
    cout << "\nSize of vector integers2 is: " << integers2.size()
        << "\nvector after initialization: " << endl;
    outputVector( integers2 );

    // Input and print integers1 and integers2
    cout << "\nEnter 17 integers: " << endl;

    inputVector( integers1 );
    inputVector( integers2 );

    cout << "\nAfter input, the vectors contain:\n"
        << "integers1: " << endl;
    outputVector( integers1 );
    cout << "integers2: " << endl;
    outputVector( integers2 );

    // Use inequality (!=) operator with vector objects
    cout << "\nEvaluating: integers1 != integers2" << endl;

    if ( integers1 != integers2 )
        cout << "integers1 and integers2 are not equal" << endl;

    // Creates vector integers3 using integers1 as an
    // initializer; print size and contents
    vector< int > integers3( integers1 ); // Copy constructor

    cout << "\nSize of vector integers3 is " << integers3.size()
        << "\nvector after initialization:" << endl;
    outputVector( integers3 );

    // Use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // Assign integers2 to integers1

    cout << "integers1: " << endl;
    outputVector( integers1 );
    cout << "integers2: " << endl;
    outputVector( integers2 );

    // Use equality (==) operator with vector objects
    cout << "\nEvaluating: integers1 == integers2" << endl;

    if ( integers1 == integers2 )
        cout << "integers1 and integers2 are equal" << endl;

    // Use square brackets to create rvalue
    cout << "\nintegers[5] is " << integers1[ 5 ];

    // Use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[ 5 ] = 1000;
    cout << "integers1:" << endl;
    outputVector( integers1 );

    // Attempt to use out-of-range subscript
    try
    {
        cout << "\nAttempt to display integers1.at( 15 )" << endl;
        cout << integers1.at( 15 ) << endl; // ERROR: out of range
    } // End try
    catch ( out_of_range &ex )
    {
        cout << "An exception occurred: " << ex.what() << endl;
    } // End catch
} // End main

// Output vector contents - Function declaration
void outputVector( const vector< int > &array )
{   // Declare i as size_t means unsigned int, so that i can be compared with array.size (which is an unsigned value)
    size_t i; // Declare control variable

    for ( i = 0; i < array.size(); ++i )
    {
        cout << setw( 12 ) << array[ i ];

        if ( ( i + 1 ) % 4 == 0 ) // 4 numbers per row of output
            cout << endl;
    } // End for

    if ( i % 4 != 0 ) // Not 4 numbers per row
        cout << endl;
} // End function outputVector

// Input vector contents
void inputVector( vector< int > &array )
{
    for ( size_t i = 0; i < array.size(); ++i )
        cin >> array[ i ];
} // End function inputVector
