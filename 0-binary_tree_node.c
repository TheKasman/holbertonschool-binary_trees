#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the pointer to the parent node
 * @value: the value of the new node
 * Return: Returns the pointer of the new node, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*make the object*/
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node) return (NULL);

	/*assign parameters*/
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
