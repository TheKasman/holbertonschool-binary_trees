#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks to see if the binary tree is a leaf
 * @node: the node we're checking
 * Return: returns 1 if it's a leaf, 0 for not a leaf or NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
