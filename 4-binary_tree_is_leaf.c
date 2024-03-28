#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This checks if a node is the leaf of a binary tree.
 * @node: Points to which node is to be checked.
 *
 * Return: If the node is a leaf then - 1.
 *         else - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

