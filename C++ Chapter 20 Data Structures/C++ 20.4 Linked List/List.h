// Figure 20.4: List.h
// Template List class definition
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h" // ListNode class definition
using namespace std;

template< typename NODETYPE >
class List
{
public:
    List(); // Constructor 
    ~List(); // Destructor
    void insertAtFront( const NODETYPE & );
    void insertAtBack( const NODETYPE & );
    bool removeFromFront( NODETYPE & );
    bool removeFromBack( NODETYPE & );
    bool isEmpty() const;
    void print() const;
private:
    ListNode< NODETYPE > *firstPtr; // Pointer to first node
    ListNode< NODETYPE > *lastPtr; // Pointer to last node

    // Utility function to allocate new node
    ListNode< NODETYPE > *getNewNode( const NODETYPE & );
}; // end CLASS List

// Declare constructor; default constructor
template< typename NODETYPE >
List< NODETYPE >::List() : firstPtr( 0 ), lastPtr( 0 )
{
    // Empty
} // End List constructor

// Declare destructor
template< typename NODETYPE >
List< NODETYPE >::~List()
{
    if ( !isEmpty() ) // List is not empty
    {
        cout << "Destroying nodes ...\n";

        ListNode< NODETYPE > *currentPtr = firstPtr;
        ListNode< NODETYPE > *tempPtr;

        while ( currentPtr != 0 ) // Delete remaining nodes
        {
            tempPtr = currentPtr;
            cout << tempPtr->data << "\n";
            currentPtr = currentPtr->nextPtr;
            delete tempPtr;
        } // End while
    } // End if

    cout << "All nodes destroyed\n\n";
} // End List destructor

// Insert node at front list; Function insertAtFront definition
template< typename NODETYPE >
void List< NODETYPE >::insertAtFront( const NODETYPE &value )
{
    ListNode< NODETYPE > *newPtr = getNewNode( value ); // New mode

    if ( isEmpty() ) // List is empty
        firstPtr = lastPtr = newPtr; // New list has only one node
    else // List is not empty
    { // QUY TẮC: TRỎ TRƯỚC, GÁN SAU. NẾU LÀM NGƯỢC LẠI THÌ SẼ MẤT DANH SÁCH LIÊN KẾT CŨ
        newPtr->nextPtr = firstPtr; // Point new node to previous 1st node
        firstPtr = newPtr; // Aim firstPtr at new node
    } // End else
} // End function insertAtFront

// Insert node at back of list; Function insertAtBack definition
template< typename NODETYPE >
void List< NODETYPE >::insertAtBack( const NODETYPE &value )
{
    ListNode< NODETYPE > *newPtr = getNewNode( value ); // New node

    if ( isEmpty() ) // List is empty
        firstPtr = lastPtr = newPtr; // New list has only one node
    else // List is not empty
    {
        lastPtr->nextPtr = newPtr; // Update previous last node
        lastPtr = newPtr; // New last node 
    } // End else
} // End function insertAtBack

// Delete node from front of list; Function removeFromFrount definition
template< typename NODETYPE >
bool List< NODETYPE >::removeFromFront( NODETYPE &value )
{
    if ( isEmpty() ) // List is empty
        return false;
    else
    {
        ListNode< NODETYPE > *tempPtr = firstPtr; // Hold tempPtr to delete

        if ( firstPtr == lastPtr )
            firstPtr = lastPtr = 0; // No nodes remain after removal
        else
            firstPtr = firstPtr->nextPtr; // Points to previous 2nd node

        value = tempPtr->data; // Return data being removed
        delete tempPtr; // Reclaim previous front node
        return true; // Delete successful
    } // End else
} // End function removeFromFront

// Delete node from back of list; Define function removeFromBack
template< typename NODETYPE >
bool List< NODETYPE >::removeFromBack( NODETYPE &value )
{
    if ( isEmpty() ) // List is empty
        return false; // Delete unsuccesful
    else
    {
        ListNode< NODETYPE > *tempPtr = lastPtr; // Hold tempPtr to delete

        if ( firstPtr == lastPtr ) // List has one element
            firstPtr = lastPtr = 0; // No nodes remain after removal
        else 
        {
            ListNode< NODETYPE > *currentPtr = firstPtr;

            // Locate second-to-last element
            while ( currentPtr->nextPtr != lastPtr )    
                currentPtr = currentPtr->nextPtr; // Move to next node
            
            lastPtr = currentPtr; // Remove last node
            currentPtr->nextPtr = 0; // This is now the last node
        } // End else

        value = tempPtr->data; // Return value from old last node
        delete tempPtr; // Reclaim former last node
        return true; // Delete successful
    } // End else
} // End function removeFromBack

// Is List empty?
template< typename NODETYPE >
bool List< NODETYPE >::isEmpty() const 
{
    return firstPtr == 0;
} // End function isEmpty

// Return pointer to newly allocated node
template< typename NODETYPE >
ListNode< NODETYPE > *List< NODETYPE >::getNewNode( const NODETYPE &value )
{
    return new ListNode< NODETYPE >( value );
} // End function getNewNode

// Display contents of List
template< typename NODETYPE >
void List< NODETYPE >::print() const
{
    if ( isEmpty() ) // List is empty
    {
        cout << "The list is empty\n\n";
        return;
    } // End if


    ListNode< NODETYPE > *currentPtr = firstPtr;

    cout << "The list is: ";

    while ( currentPtr != 0 ) // Get element data
    {
        cout << currentPtr->data << ' ';
        currentPtr = currentPtr->nextPtr;
    } // End while

    cout << "\n\n";
} // End function print

#endif