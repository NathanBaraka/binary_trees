#include "binary_trees.h"

/**
 * binary_tree_postorder - This traverses the binary tree using a post-order traversal.
 * @tree: Points to the root node to be transversed.
 * @func: Points to a function call for each.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

