#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, NULL if node is NULL or has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandparent = node->parent->parent;

	if (grandparent->right == parent)
		return (grandparent->left);
	else
		return (grandparent->right);
}
