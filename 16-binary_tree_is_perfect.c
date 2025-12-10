#include "binary_trees.h"

/**
 * perfection - checks to see if the nodes are "perfect"
 * @node: the node we're on
 * @current_depth: the depth of this current node
 * @expected_depth: the expected depth
 * Return: returns the expected depth, 0 if not
 */

static int perfection(const binary_tree_t *node, int current_depth,
		int expected_depth)
{
	if (!node->left && !node->right)
		return (current_depth == expected_depth);

	if (!node->left || !node->right)
		return (0);

	return (perfection(node->left, current_depth + 1, expected_depth) &&
		perfection(node->right, current_depth + 1, expected_depth));
}


/**
 * tree_height - helper function to get the height of the tree
 * @tree: the tree
 * Return: returns the height back to us
 */
static int tree_height(const binary_tree_t *tree)
{
	int leftH = 0, rightH = 0;

	if (!tree)
		return (0);

	leftH = tree_height(tree->left);
	rightH = tree_height(tree->right);

	return ((leftH > rightH ? leftH : rightH) + 1);
}


/**
 * binary_tree_is_perfect - checks to see if the binary tree is perfection
 * @tree: the tree we're checking
 * Return: returns an int value
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);

	/*get the height first*/
	height = tree_height(tree) - 1;
	/*go check every node if it's perfect*/
	return (perfection(tree, 0, height));
}
