#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: pointer to node used to find sibling
 * Return: sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (NULL);
}
