#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count the nodes
 * that have at least one leaf
 *
 * @tree: takes the desired node
 * Return: the number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree)
	{
		x += (tree->left || tree->right) ? 1 : 0;
		x += binary_tree_nodes(tree->left);
		x += binary_tree_nodes(tree->right);
	}
	return (x);
}
