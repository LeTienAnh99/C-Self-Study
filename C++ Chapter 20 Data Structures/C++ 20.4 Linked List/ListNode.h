// Fig. 20.3: ListNode.h
// Template ListNode class definition.
#ifndef LISTNODE_H
#define LISTNODE_H

// Forward declartion of class List required to announce that class
// List exists so it can be used in the friend declaration at line 13
template< typename NODETYPE > class List;
// Template syntax: template< typename T >
template< typename NODETYPE >
class ListNode
{
    friend class List< NODETYPE >; // Make List a friend

public:
    ListNode( const NODETYPE & ); // Constructor
    NODETYPE getData() const; // Return data in node
private:
    NODETYPE data; // Data
    ListNode< NODETYPE > *nextPtr; // Next node in list
}; // End class ListNode; NODETYPE is a ListNode template params 

// Constructor
template< typename NODETYPE >
ListNode< NODETYPE >::ListNode( const NODETYPE &info )
    : data( info ), nextPtr( 0 )
{
    // Empty body
} // End ListNode constructor

// Return copy data in node
template< typename NODETYPE >
NODETYPE ListNode< NODETYPE >::getData() const // If dont use tempalte, similar to: void ListNode::getData() const 
{
    return data;
} // End function getData

#endif