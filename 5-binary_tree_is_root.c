#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if the node is a root of a binary tree.
 * @node: Points to the node to be checked.
 *
 * Return: If the node is a root then - 1.
 *         else - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

