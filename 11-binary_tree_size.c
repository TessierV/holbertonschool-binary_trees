#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: binary tree
 * Return: size+1
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size + 1);
}
