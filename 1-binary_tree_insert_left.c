#include "binary_trees.h"


/**
 * binary_tree_insert_left - that inserts a node as the left-child of another node
 * @parent: pointer of a parent
 * @value: value of the node inserted
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode = NULL, *node = NULL;

	if (!parent)
		return (NULL);
	else
	{
		leftNode = binary_tree_node(parent, value);
		if (leftNode)
		{
			node = parent->left;
			if (node)
			{
				node->parent = leftNode;
				leftNode->left = node;
				parent->left = leftNode;
			}
			else
				parent->left = leftNode;
		}
	}
	return (leftNode);
}
