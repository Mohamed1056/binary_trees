#include "binary_trees.h"

/**
 * binary_tree_preorder - functon to print the tree
 * in preoreder
 *
 * @tree: acts as the base root
 * @func: rhe function that will be used
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
