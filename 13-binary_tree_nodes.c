#include "binary_trees.h"

/**
 * binary_tree_nodes - counts how many nodes there are
 * @tree: the tree!
 * Return: returns the amount of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
