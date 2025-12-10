#include "binary_trees.h"

/**
 * binary_tree_is_full - checks to see if the binary tree is full!
 * @tree: the tree we're checking
 * Return: returns an int value
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left != NULL && tree->right != NULL) ||
			(tree->left == NULL && tree->right == NULL))
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));

	return (0);
}
