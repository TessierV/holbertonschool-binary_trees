#include "binary_trees.h"
/**
 * binary_tree_is_perfect - if a binary tree is perfect
 * @tree: binary tree
 * Return: 0 false 1 true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_left, tree_right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	tree_left = binary_tree_is_perfect(tree->left);
	tree_right = binary_tree_is_perfect(tree->right);
	while (tree->left && tree->right)
	{
		if ((tree->left->left && tree->left->right) &&
				(!tree->right->left && !tree->right->right))
			return (0);
		if ((!tree->left->left && !tree->left->right) &&
				(tree->right->left && tree->right->right))
			return (0);
		return (tree_left && tree_right);
	}
	if (tree_left == tree_right)
		return (1);
	else
		return (0);
}
