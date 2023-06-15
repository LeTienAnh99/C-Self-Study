// Linear Search Algorithm
#include <iostream>
#include <iomanip>
using namespace std;

int linearSearch( int arr[], int size, int searchKey )
{
    // Search each element in the array, return the key if found, return -1 if not found
    for ( int i = 0; i <= size; ++i )
    {
        if ( arr[ i ] == searchKey )
            return i;
    } // End for
    return -1; // Not found
} // End function Linear Search

int main()
{
    const int arraySize = 100;
    int a[ arraySize ];
    int key; // Search key

    // Generate a set of number
    for ( int i = 0; i < arraySize; ++i )
        a[ i ] = i * 2;
    
    cout << "Enter the search key: ";
    cin >> key; 

    int element = linearSearch( a, arraySize, key );

    // Output results:
    if ( element != -1 ) // -1 means "not found"
        cout << "\nFound the key " << key << " at position " << element << endl;
    else 
        cout << "Key not found";
}