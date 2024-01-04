#include "binary_trees.h"

/**
 * binary_tree_leaves - function to calculate the leaves
 *
 * @tree: pointing to the desired node
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree)
	{
		leaf += (!tree->left && !tree->right) ? 1 : 0;
		leaf += binary_tree_leaves(tree->left);
		leaf += binary_tree_leaves(tree->right);
	}
	return (leaf);
}
