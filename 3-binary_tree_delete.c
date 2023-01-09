#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes a tree
 * @tree: binary tree
 *
 * Return: return if tree is empty
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
