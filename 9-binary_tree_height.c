#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of the binary tree
 * @tree: the tree that's in question
 * Return: returns the size of the treee, 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH = 0, rightH = 0;

	if (!tree)
		return (0);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	if (leftH > rightH)
		return (leftH);
	else
		return (rightH);
}
