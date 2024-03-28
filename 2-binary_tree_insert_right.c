#include "binary_trees.h"

/**
 * binary_tree_insert_right - This inserts a node as the right-child
 *                            of another in a binary tree.
 * @parent: Points to the node to which is to be inserted in the right-child.
 * @value: This is what is stored in the new node.
 * Return: If the parent is NULL or an error occurs then - NULL.
 *         Otherwise - Points to the new node.
 * Description: If parent already has a right-child, then the new node
 *              takes its place and the old right-child is set to
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

