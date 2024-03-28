#include "binary_trees.h"

/**
 * is_full_recursive - It checks if a binary tree is full recursively or not.
 * @tree: Points to the root node of the tree to be checked.
 *
 * Return: If tree is not full, then 0.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - This checks whether the binary tree is full.
 * @tree: Points to the root node if its full.
 *
 * Return: If tree is not NULL or is not full - then 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

