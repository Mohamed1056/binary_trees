#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if
 * the node is leaf or not
 *
 * @node: represent the node that will e checked
 * Return: 1 if it is leaf and 0 if not
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);
}
