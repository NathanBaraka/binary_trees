#include "binary_trees.h"

/**
 * binary_tree_preorder - This goes through a binary tree using a transversal order.
 * @tree: Points to the n=root node to be to traversed.
 * @func: This points to the function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

