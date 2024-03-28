#include "binary_trees.h"

/**
 * binary_tree_balance - This measures the balance factor of a binary tree.
 * @tree: Points to the tree to measure the balance factor of.
 *
 * Return: If the tree is NULL, then return 0, else it returns the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - This is ti measure the tree height.
 * @tree: Points to the root node to measure the height of.
 *
 * Return: If the tree is NULL, then your function must return 0, else it returns the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

