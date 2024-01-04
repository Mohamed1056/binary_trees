#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if the
 * node is root or non
 *
 * @node: pointing to the checked node
 * Return: 1 if it is root, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
