#include "binary_trees.h"
/**
 * binary_tree_nodes - This is  a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: This is a pointer
 * Return: 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
