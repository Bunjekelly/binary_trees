#include "binary_trees.h"
/**
 * binary_tree_leaves - This a function that counts the leaves
 * in a binary tree
 * @tree: This is a pointer to the node
 * Return: 0 0r 1
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
