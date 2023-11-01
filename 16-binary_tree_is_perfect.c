#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return ((height_left > height_right ? height_left : height_right) + 1);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * (all levels completely filled)
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
	{
		return (0);
	}
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left == height_right)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}
	return (0);
}
