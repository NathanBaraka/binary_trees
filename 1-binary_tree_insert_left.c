#include "binary_trees.h"

/**
 * binary_tree_insert_left - This inserts a node to the left-child of
 *                           of another in a binary tree.
 * @parent: Points to the node in the left.
 * @value: What is stored in the new node.
 *
 * Return: If the parent is NULL or an error occurs then - NULL.
 *         Otherwise - Points to the new node.
 *
 * Description: If the parent already has a left-child, then the new node
 *              takes its place and the old left-child is simply set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}

