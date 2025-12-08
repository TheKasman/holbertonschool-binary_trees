#include "binary_trees.h"

/**
 * binary_tree_size - gets the size of the binary tree
 * @tree: the tree that's in question
 * Return: returns the depth of the tree, 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
