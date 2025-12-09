#include "binary_trees.h"

/**
 * binary_tree_nodes - counts how many nodes there are
 * @tree: the tree!
 * Return: returns the amount of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);

	return (binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));
}
