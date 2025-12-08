#include "binary_trees.h"

/**
 * binary_tree_is_root - is the binary tree a root?
 * @node: the node we're checking
 * Return: returns 1 if yes, 0 if it's not or NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
