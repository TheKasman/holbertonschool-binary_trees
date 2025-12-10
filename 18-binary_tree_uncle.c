#include "binary_trees.h"

/**
 * binary_tree_uncle - checks to see if a node has an uncle
 * @node: the node we're checking
 * Return: returns the uncle node, or null if it's bad.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandparent = node->parent->parent;

	return ((grandparent->left == node->parent) ?
			grandparent->right : grandparent->left);
}
