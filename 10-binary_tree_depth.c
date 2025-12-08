#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of the binary tree
 * @tree: the tree that's in question
 * Return: returns the depth of the tree, 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
