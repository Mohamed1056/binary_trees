#include "binary_trees.h"

/**
 * binary_tree_postorder - function to postorder
 * the tree
 *
 * @tree: the base root for the tree
 * @func: the function that will be used
 * Return: nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
