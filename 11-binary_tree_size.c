#include "binary_trees.h"

/**
 * binary_tree_size - function to calculat the size
 * of any node
 *
 * @tree: the node that we want to find its size
 * Return: the size of the node
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree)
	{
		num += 1;
		num += binary_tree_size(tree->left);
		num += binary_tree_size(tree->right);
	}
	return (num);
}
