#include "binary_trees.h"
/**
 * binary_tree_is_perfect - if a binary tree is perfect
 * @tree: binary tree
 * Return: 0 false 1 true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	while (tree->left && tree->right)
	{
		if ((tree->left->left && tree->left->right) &&
				(!tree->right->left && !tree->right->right))
			return (0);
		if ((!tree->left->left && !tree->left->right) &&
				(tree->right->left && tree->right->right))
			return (0);
		return ((binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)));
	}
	if (binary_tree_is_perfect(tree->left) == binary_tree_is_perfect(tree->right))
		return (1);
	else
		return (0);
}
