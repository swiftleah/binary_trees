#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle node of specified node
 * @node: pointer to node to find uncle of
 * Return: uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	else if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	return (NULL);
}
