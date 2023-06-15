// Figure 20.20: TreeNode.h
// Template TreeNode class definition
#ifndef TREENODE_H
#define TREENODE_H

// Forward declaration of class Tree
template< typename NODETYPE > class Tree;

// TreeNode class-template definition
template< typename NODETYPE >
class TreeNode
{
    friend class Tree< NODETYPE >;
public:
    // Constructor
    TreeNode( const NODETYPE &d )
        : leftPtr( 0 ), // Pointer to left subtree
        data( d ), // Tree node data
        rightPtr( 0 ) // Pointer to right subtree
    {
        // Empty body
    } // End TreeNode constructor

    // Return copy of node's data
    NODETYPE getData() const
    {
        return data;
    } // End getData function
private:
    TreeNode< NODETYPE > *leftPtr; // Pointer to left subtree
    NODETYPE data;
    TreeNode< NODETYPE > *rightPtr; // Pointer to right subtree
}; // End class TreeNode

#endif