#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node into the binary tree on the right
 * @parent: the parent node
 * @value: the value of the node we're making
 * Return: returns a pointer to the node we just made
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value; /*at least this node has value... unlike me LMAO*/
	node->parent = parent;
	node->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = node;
	node->left = NULL;
	parent->right = node;

	return (node);
}
