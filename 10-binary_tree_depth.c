#include "binary_trees.h"
/**
 * binary_tree_depth - This a function that measures the
 * depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t right_depth = 0;
	size_t left_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
		return (0);

	left_depth = binary_tree_depth(tree->parent);


	if (right_depth > left_depth)
		return (right_depth + 1);
	else
		return (left_depth + 1);

}
