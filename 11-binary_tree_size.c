#include "binary_trees.h"
/**
 * binary_tree_size - This is  a function that measures
 * the size of a binary tree
 * @tree: This is a pointr to the root
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_s = binary_tree_size(tree->left);
	size_t right_s = binary_tree_size(tree->right);

	return (left_s + right_s + 1);
}
