// Figure 7.9: fig07_09.cpp
// Bar chart printing program
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const int arraySize = 11;
    int n[ arraySize ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };
    // One for 100, 2 for 90, 4 for 80,...
    cout << "Grade distribution: " << endl;

    // For each element of array n, output a bar of the chart
    for ( int i = 0; i < arraySize; i++ )
    {
        // Output bar labels ("0-9:", ..., "90-99:", "100:" )
        if ( i == 0 )
            cout << " 0-9: ";
        else if ( i == 10 )
            cout << " 100: ";
        else
            cout << i * 10 << "-" << ( i * 10 ) + 9 << ": ";

        // Print bar of asterisks
        for ( int stars = 0; stars < n[ i ]; ++stars )
            cout << '*';

        cout << endl; // Start a new line of product
    } // End outer for
} // End main
