// Figure 14.2: Stack.h
// Stack class template
#ifndef STACK_H
#define STACK_H

template< typename T >
class Stack
{
public:
    explicit Stack( int = 10 ); // Default constructor (Stack size 10)

    // Destructor
    ~Stack()
    {
        delete [] stackPtr; // Deallocate internal space for Stack
    } // End ~Stack destructor

    bool push( const  T & ); // Push an element onto the Stack
    bool pop( T & ); //  Pop an element off the Stack

    // Determine whether Stack is empty
    bool isEmpty() const
    {
        return top == -1;
    } // End function isEmpty

    // Determine whether Stack is full
    bool isFull() const
    {
        return top == size - 1;
    } // End function isFull

private:
    int size; // # of elements in the Stack
    int top; // Location of the top element (-1 means empty)
    T *stackPtr; // Pointer to internal representation of the Stack
}; // End class template Stack

// Constructor template
template< typename T >
Stack< T >::Stack( int s )
    : size( s > 0 ? s : 10 ), // Validate size
      top( -1 ), // Stack initially empty
      stackPtr( new T[ size ] ) // Allocate memory for elements
{
    // Empty body
} // End Stack constructor template

// Push element onto Stack;
// if successful, return true; otherwise, return false
template< typename T >
bool Stack< T >::push( const T &pushValue )
{
    if ( !isFull() )
    {
        stackPtr[ ++top ] = pushValue; // Place item on Stack
        return true; // Push successful
    } // End if

    return false; // Push unsuccessful
} // End function template push

// Pop element off Stack;
// if successful, return true; otherwise, return false
template< typename T >
bool Stack< T >::pop( T &popValue )
{
    if ( !isEmpty() )
    {
        popValue = stackPtr[ top-- ]; // Remove item from Stack
        return true; // Pop successful
    } // End if

    return false; // Pop unsuccessful
} // End function template pop

#endif