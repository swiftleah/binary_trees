#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node to left-child of another node
 * @parent: pointer to parent node to insert left-child in
 * @value: value to store in new node
 * Return: pointer to new node or NULL upon failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	parent->left = newnode;
	return (newnode);
}
