#include "binary_trees.h"


/**
 * height - helper function
 * @tree: the tree we're using
 * Return: returns the height back to us.
 */
static int height(const binary_tree_t *tree)
{
	int leftH = 0, rightH = 0;

	if (!tree)
		return (0);

	leftH = height(tree->left);
	rightH = height(tree->right);

	return (leftH > rightH ? leftH : rightH + 1);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree!
 * Return: returns the balance as an int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftH = 0, rightH = 0;

	if (!tree)
		return (0);

	leftH = height(tree->left);
	rightH = height(tree->right);

	return (leftH - rightH);
}
