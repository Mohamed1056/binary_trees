#include "binary_trees.h"

/**
 * binary_tree_inoreder - function to preorder
 * the tree
 *
 * @tree: the base root of the tree
 * @func: takes the function from another file
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}