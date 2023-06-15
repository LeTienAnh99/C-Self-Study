// Figure 20.22: fig20_22.cpp
// Tree class test program
#include <iostream>
#include <iomanip>
#include "Tree.h" // Tree class definition
using namespace std;

int main()
{
    Tree< int > intTree; // Create Tree object of int values
    int intValue;

    cout << "Enter 10 integer values:\n";

    // Insert 10 intgers to intTree
    for ( int i = 0; i < 10; ++i )
    {
        cin >> intValue;
        intTree.insertNode( intValue );
    } // End for

    cout << "\nPreorder traversal\n";
    intTree.preOrderTraversal();

    cout << "\nInorder traversal\n";
    intTree.inOrderTraversal();

    cout << "\nPostorder traversal\n";
    intTree.postOrderTraversal();

    Tree< double > doubleTree; // Create Tree of double values
    double doubleValue;

    cout << fixed << setprecision( 1 )
        << "\n\n\nEnter 10 double values\n";

    // Insert 10 double values to doubleTree
    for ( int j = 0; j < 10; ++j )
    {
        cin >> doubleValue;
        doubleTree.insertNode( doubleValue );
    } // End for

    cout << "\nPreorder traversal\n";
    doubleTree.preOrderTraversal();

    cout << "\nInorder traversal\n";
    doubleTree.postOrderTraversal();

    cout << "\nPostorder traversal\n";
    doubleTree.postOrderTraversal();
    cout << endl;
} // End main