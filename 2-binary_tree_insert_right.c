#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node
 *		NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);

	rightNode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		rightNode->right = parent->right;
		(parent->right)->parent = rightNode;
	}
	parent->right = rightNode;

	return (rightNode);
}
