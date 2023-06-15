// Figure 10.4: Increment.h
// Definition of class Increment.
#ifndef INCREMENT_H
#define INCREMENT_H

class Increment
{
public:
    Increment( int c = 0, int i = 1 ); // Default constructor

    // Function addIncrement definition
    void addIncrement() // Non-const
    {
        count += increment;
    } // End function addIncrement

    void print() const; // Prints count and increment
private:
    int count;
    const int increment; // Const data member
}; // End class Increment

#endif