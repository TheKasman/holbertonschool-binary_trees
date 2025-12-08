#include "binary_trees.h"

/**
 * binary_tree_delete - PURGE THE TREE
 * @tree: the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *node)
{
	/*if it's the root - base case*/
	if (!node)
		return;
	binary_tree_delete(node->left);
	binary_tree_delete(node->right);
	free(node);
	node = NULL;
}
