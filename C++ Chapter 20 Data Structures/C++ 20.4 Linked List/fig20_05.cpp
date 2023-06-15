// Figure 20.5: fig20_05.cpp
// List class test program
#include <iostream>
#include <string>
#include "List.h" // List class definition
using namespace std;

// Display program instructions to user
void instructions()
{
    cout << "Enter one of the following:\n"
        << " 1 to insert at beginning of list\n"
        << " 2 to insert at the end of list\n"
        << " 3 to delete from beginning of list\n"
        << " 4 to delete from end of list\n"
        << " 5 to end list processing\n";
} // End function instruction

// Function to test a List
template< typename T >
void testList( List< T > &listObject, const string &typeName )
{
    cout << "Tesing a List of " << typeName << " values\n";
    instructions(); // Display instructions

    int choice; // Store the user choices
    T value; // Store input value

    do // Perform user-selected actions
    {
        cout << "?";
        cin >> choice;

        switch ( choice )
        {
            case 1: // Insert at beginning
                cout << "Enter " << typeName << ": ";
                cin >> value;
                listObject.insertAtFront( value );
                listObject.print();
                break;
            case 2: // Insert at end
                cout << "Enter " << typeName << ": ";
                cin >> value;
                listObject.insertAtBack( value );
                listObject.print();
                break;
            case 3: // Remove from beginning
                if ( listObject.removeFromFront( value ) )
                    cout << value << " removed from list\n";

                listObject.print();
                break;
            case 4: // Remove from end
                if ( listObject.removeFromBack( value ) )
                    cout << value << " removed from list\n";
                
                listObject.print();
                break;
        } // End switch
    } while ( choice < 5 ); // End do...while

    cout << "End list test\n\n";
} // End function testList()

int main()
{
    // Test List of int values
    List< int > integerList; // Create object of class List (with template)
    testList( integerList, "Integer" );
    
    // Test List of double values
    List< double > doubleList;
    testList( doubleList, "Double" );
} // End main