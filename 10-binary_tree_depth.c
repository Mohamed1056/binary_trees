#include "binary_trees.h"

/**
 * binary_tree_depth - function to calculate the
 * depth of the tree
 *
 * @tree: the base root of the tree
 * Return: the depth of the node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t x = 0;

		x = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
		return (x);
	}
	return (0);
}
