#include "binary_trees.h"
/**
 * binary_tree_balance - This a function that measures the
 * balance factor of a binary tree
 * @tree: This is a pointer to the root
 * Return: NULL OR 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	return (height_l - height_r);
}

/**
 * binary_tree_height - This is a function that will get
 * the height of a binary tree
 * @tree: This is the pointer to the root
 * Return: the height or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size_l = 0;
	size_t size_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	size_l += 1 + binary_tree_height(tree->left);
	size_r += 1 + binary_tree_height(tree->right);

	if (size_l > size_r)
	{
		return (size_l);
	}

	return (size_r);
}
