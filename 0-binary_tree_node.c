#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to parent node
 * @value: value to put into new node
 * Return: pointer to new node or NULL upon failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;

	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
