#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This is  a function that checks
 * if a binary tree is perfect
 * @tree: This is a pointer to the root
 * Return: NULL or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		if (binary_tree_is_perfect(tree->right) &&
			binary_tree_is_perfect(tree->left))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * binary_tree_height - This is a function that gets the height of a binary tree
 * @tree: This is a pointer to the root
 * Return: Height or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	left_h++;

	right_h = binary_tree_height(tree->right);
	right_h++;

	if (left_h < right_h)
		return (right_h);
	else
		return (left_h);
}
