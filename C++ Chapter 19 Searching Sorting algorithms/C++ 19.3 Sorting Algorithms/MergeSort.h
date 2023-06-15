// Figure 19.5: MergeSort.h
// Class that creates a vector filled with random integers
// Provides a function to sort the vector with merge sort
#include <vector>
using namespace std;

// Define class MergeSort
class MergeSort
{
public:
    MergeSort( int ); // Constructor initializes vector
    void sort(); // Sort vector using merge sort
    void displayElements() const; // Display vector elements
private:
    int size; // Vector size
    vector< int > data; // Vector of ints
    void sortSubVector( int, int ); // Sort subvector
    void merge( int, int, int, int ); // Merge two sorted vectors
    void displaySubVector( int, int ) const; // Display subvector
}; // End class MergeSort