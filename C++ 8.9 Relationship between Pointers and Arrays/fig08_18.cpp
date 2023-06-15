// Figure 8.18: fig08_18.cpp
// Using subscripting and pointer notations with arrays
#include <iostream>
using namespace std;

int main()
{
    int b[] = { 10, 20, 30, 40 }; // Create 4-element array b
    int *bPtr = b; // Set bPtr to point to array b

    // Output array b using array subscript notation
    cout << "Array b printed with:\n\nArray subscript notation\n";

    for ( int i = 0; i < 4; ++i )
        cout << "b[" << i << "] = " << b[ i ] << '\n';

    // Output array b using the array name and pointer/offset notation
    cout << "\nPointer/offset notation where "
        << "the pointer is the array name\n";
    cout << bPtr << endl; // Print out address of first element
    cout << bPtr[3] << endl; // Print value of 3rd element
    cout << &bPtr[3] << endl; // Print address of 3rd element
    cout << b << endl; // Print out address of first element
    cout << &b[0] << endl; // Print out address of first element
    cout << b[0] << endl; // Print out value of first element
    cout << *bPtr << endl; // Print out value of first element
    cout << b[ 0 + 3 ] << endl; // Print value of 3rd element
    cout << &b[ 0 + 3 ] << endl; // Print address of 3rd element
    for ( int offset1 = 0; offset1 < 4; ++offset1 )
        cout << "*(b + " << offset1 << ") = " << *( b + offset1 ) << '\n';

    // Output array b using bPtr and array subscript notation
    cout << "\nPointer subscript notation\n";

    for ( int j = 0; j < 4; ++j )
        cout << "bPtr[" << j << "] = " << bPtr[ j ] << '\n';

    cout << "\nPointer/offset notation\n";

    // Output array b using bPtr and pointer/offset notation
    for ( int offset2 = 0; offset2 < 4; ++offset2 )
        cout << "*(bPtr + " << offset2 << ") = "
            << *( bPtr + offset2 ) << '\n';
} // End main
