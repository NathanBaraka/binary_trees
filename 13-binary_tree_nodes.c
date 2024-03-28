#include "binary_trees.h"

/**
 * binary_tree_nodes - This counts the nodes with at least 1 child in a binary tree.
 * @tree: Points to the root node which counts the number of nodes.
 *
 * Return: If the tree is NULL, then the function must return 0, else it returns node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}

