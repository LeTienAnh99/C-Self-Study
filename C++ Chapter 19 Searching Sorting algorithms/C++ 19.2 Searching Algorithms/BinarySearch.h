// Figure 19.2: BinarySearch.h
// Class that contains a vector of random integers and a function
// that uses binary search to find an integer.
#include <vector>
using namespace std;

class BinarySearch
{
public:
    BinarySearch( int ); // Constructor that initializes vector
    int binarySearch( int ) const; // Perform a binary search on vector
    void displayElements() const; // Display vector elements
private:
    int size; // Vector size
    vector< int > data; // Vector of ints
    void displaySubElements( int, int ) const; // Display range of values
}; // End class BinarySearch