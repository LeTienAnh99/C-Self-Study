// Figure 20.21: Tree.h
// Template Tree class definition
#ifndef TREE_H
#define TREE_H

#include <iostream>
#include "TreenNode.h"
using namespace std;

// Tree class-template definition
template< typename NODETYPE > class Tree
{
public:
    Tree(); // Constructor
    void insertNode( const NODETYPE & );
    void preOrderTraversal() const;
    void inOrderTraversal() const;
    void postOrderTraversal() const;
private:
    TreeNode< NODETYPE > *rootPtr;

    // Utility functions
    void insertNodeHelper( TreeNode< NODETYPE > **, const NODETYPE & );
    void preOrderHelper( TreeNode< NODETYPE > * ) const;
    void inOrderHelper( TreeNode< NODETYPE > * ) const;
    void postOrderHelper( TreeNode< NODETYPE > * ) const;
}; // End class Tree

// Constructor
template< typename NODETYPE >
Tree< NODETYPE >::Tree()
{
    rootPtr = 0; // Indicate tree is initially empty
} // End Tree constructor

// Insert node in Tree
template< typename NODETYPE >
void Tree< NODETYPE >::insertNode( const NODETYPE &value )
{
    insertNodeHelper( &rootPtr, value );
} // End function insertNode

// Utility function called by insertNode; receives a pointer
// to a pointer so that the function can modify the pointer's value
template< typename NODETYPE >
void Tree< NODETYPE >::insertNodeHelper(
    TreeNode< NODETYPE > **ptr, const NODETYPE &value )
{
    // If subtree is emptyl create new TreeNode containing value
    if ( *ptr == 0 )
        *ptr = new TreeNode< NODETYPE >( value );
    else // Subtree is not empty
    {
        // Data to insert is less than data in current node
        if ( value < ( *ptr )->data)
            insertNodeHelper( &( ( *ptr)->leftPtr ), value );
        else 
        {
            // Data to insert is greater than data in current node
            if ( value > ( *ptr )->data )
                insertNodeHelper( &( ( *ptr )->rightPtr ), value );
            else // Duplicate data value ignored
                cout << value << " dup" << endl;
        } // End else
    } // End else
} // End function insertNodeHelper

// Begin preorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::preOrderTraversal() const
{
    preOrderHelper( rootPtr );
} // End function preOrderTraversal

// Utility function to perform preorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::preOrderHelper( TreeNode< NODETYPE > *ptr ) const
{
    if ( ptr != 0 )
    {
        cout << ptr->data << ' '; // Process node
        preOrderHelper( ptr->leftPtr ); // Traverse left subtree
        preOrderHelper( ptr->rightPtr ); // Traverse right subtree
    } // End if
} // End function preOrderHelper

// Begin inorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::inOrderTraversal() const
{
    inOrderHelper( rootPtr );
} // End function inOrderTraversal

// Utility function to perform inorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::inOrderHelper( TreeNode< NODETYPE > *ptr ) const
{
    if ( ptr != 0 )
    {
        inOrderHelper( ptr->leftPtr ); // Traverse left subtree
        cout << ptr->data << ' '; // Process node
        inOrderHelper( ptr->rightPtr ); // Traverse right subtree
    } // End if
} // End function inOrderHelper

// Begin postoder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::postOrderTraversal() const
{
    postOrderHelper( rootPtr );
} // End function postOrderTraversal

// Utility function to perform postorder traversal of Tree
template< typename NODETYPE >
void Tree< NODETYPE >::postOrderHelper(
    TreeNode< NODETYPE > *ptr ) const
{
    if ( ptr != 0 )
    {
        postOrderHelper( ptr->leftPtr ); // Traverse left subtree
        postOrderHelper( ptr->rightPtr ); // Traverse right subtree
        cout << ptr->data << ' '; // Process node
    } // End if
} // End function postOrderHelper

#endif