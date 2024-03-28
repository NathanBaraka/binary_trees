#include "binary_trees.h"

/**
 * binary_tree_uncle - This gets the uncle of a node
 *                     in a binary tree.
 * @node: Points to the node which is to find the uncle of.
 *
 * Return: If the node is NULL or has no uncle, then NULL.
 *         Otherwise, points to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

