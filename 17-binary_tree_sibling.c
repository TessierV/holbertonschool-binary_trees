#include "binary_trees.h"
/**
 * binary_tree_sibling - function finds the sibling of a node
 * @node: node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);
	if (node->parent->left != node)
		return ( node->parent->left);
	else
		return (node->parent->right);
}
