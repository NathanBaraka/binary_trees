#include "binary_trees.h"

/**
 * binary_tree_sibling - This finds the sibling of a
 *                       node in a binary tree.
 * @node: Points to the node to find the sibling of.
 *
 * Return: If a node is NULL or there is no sibling then - NULL.
 *         Otherwise - points to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
