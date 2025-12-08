#include "binary_trees.h"

/**
 * binary_tree_preorder - pre order traversal (left side first)
 * @tree: the tree's root
 * @func: the function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*print the information*/
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
