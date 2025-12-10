#include "binary_trees.h"

/**
 * binary_tree_sibling - checks to see if a node has a sibling
 * @node: the node we're checking
 * Return: returns the sibling node, or null if it's bad.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
