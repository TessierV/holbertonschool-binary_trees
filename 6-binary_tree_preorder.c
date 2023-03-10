#include "binary_trees.h"

/**
 * binary_tree_preorder - going through a binary tree using pre-order traversal
 * @tree: pointer to the root of the tree t traverse
 * @func: pointer to afunction to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	func(tree->n);

	/* go left */
	binary_tree_preorder(tree->left, func);

	/* go right */
	binary_tree_preorder(tree->right, func);
}
