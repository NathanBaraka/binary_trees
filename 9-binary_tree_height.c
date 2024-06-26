#include "binary_trees.h"

/**
 * binary_tree_height - Checks and measures the height of a binary tree.
 * @tree: Points to the tree to be measured height.
 *
 * Return: If the tree is NULL, then the function must return 0, else return the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

