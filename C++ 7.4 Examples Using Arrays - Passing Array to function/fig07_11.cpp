// Figure 7.11: fig07_11a.cpp
// Poll analysis program // Using array to summarize survey results
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Define array sizes
    const int responseSize = 20; // Size of array responses
    const int frequencySize = 6; // Size of array frequency

    // Place survey responses in array responses
    const int responses[ responseSize ] = { 1, 2, 5, 4,3, 5, 2, 1, 3,
        1, 4, 3, 3, 2, 3, 3, 2, 2, 5 };

    // Initialize frequency counter to 0
    int frequency[ frequencySize ] = {};

    // For each answer, select responses element and use that value
    // as frequency subscript to determine element to increment
    for ( int answer = 0; answer < responseSize; ++answer )
        ++frequency[ responses[ answer ] ];

    cout << "Rating" << setw( 17 ) << "Frequency" << endl;

    // Output each array element's value
    for ( int rating = 1; rating < frequencySize; ++rating )
        cout << setw( 6 ) << rating << setw( 17 ) << frequency[ rating ]
            << endl;
} // End main
