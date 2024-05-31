#ifndef __BST_H__
#define __BST_H__

#include <stdint.h>
#include <stdbool.h>

typedef BinaryTreeKey void;
typedef BinaryTreeValue void;

typedef struct binary_tree {
	struct binary_tree_node *root;
} BinaryTree;

typedef struct binary_tree_node {
	struct binary_tree_node *left;
	struct binary_tree_node *right;
	BinaryTreeKey key;
	BinaryTreeValue value;
};

// Allocates root node memory.
BinaryTree binary_tree_init(void);

// Frees memory associated with root node.
void binary_tree_deinit(BinaryTree *const tree);

// Searches for value by key in a tree.
// Returns pointer to tree node if found, NULL -- otherwise.
BinaryTreeNode* binary_tree_search(const BinaryTree *const tree,
                                   BinaryTreeKey key);

// Inserts key-value node into the tree
// Returns false if key was already in the tree or insertion failed,
// returns true if insertion was successful.
bool binary_tree_insert(BinaryTree *const tree,
                        BinaryTreeKey key,
                        BinaryTreeValue value);

// Deletes tree node by key in the tree
// Returns true if key was found and removal was successful, false -- otherwise.
bool binary_tree_delete(BinaryTree *const tree,
                        BinaryTreeKey key);

// NOTE: Write your _custom_ function prototype here

#endif // __BST_H__
