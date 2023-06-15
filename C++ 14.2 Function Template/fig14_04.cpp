// Figure 14.4: fig14_04.cpp
// Stack class template test program. Function main uses a 
// function template to manipualte objects of type Stack< T >
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

// Function template to manipulate Stack< T >
template< typename T >
void testStack(
    Stack< T > &theStack, // Reference to Stack< T >
    T value, // Initial value to push
    T increment, // Increment for subsequent values
    const string stackName ) // Name of the Stack< T > object
{
    cout << "\nPushing elements onto " << stackName << '\n';

    // Push element onto Stack
    while ( theStack.push( value ) )
    {
        cout << value << ' ';
        value += increment;
    } // End while

    cout << "\nStack is full. Cannot push " << value
        << "\n\nPopping elements from " << stackName << '\n';

    // Pop elements from Stack
    while ( theStack.pop( value ) )
        cout << value << ' ';

    cout << "\nStack is empty. Cannot pop" << endl;
} // End function template testStack

int main()
{
    Stack< double > doubleStack( 5 ); // Size 5
    Stack< int > intStack; // Default size to 10

    testStack( doubleStack, 1.1, 1.1, "doubleStack" );
    testStack( intStack, 1, 1, "intStack" );
} // End main