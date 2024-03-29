#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to add new
 * node at left
 *
 * @parent: takes the root of the new node
 *
 * @value: takes the value of the node
 *
 * Return: new node at left
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_left_node = binary_tree_node(parent, value);
	if (new_left_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	parent->left = new_left_node;
	return (new_left_node);
}
