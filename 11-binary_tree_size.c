#include "binary_trees.h"

/**
 * binary_tree_size - gets the size of the binary tree
 * @tree: the tree that's in question
 * Return: returns the depth of the tree, 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
}
