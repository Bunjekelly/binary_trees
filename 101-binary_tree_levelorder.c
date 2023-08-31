#include "binary_trees.h"
#include <stdlib.h>

void binary_tree_print_level(const binary_tree_t *tree, size_t level, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_levelorder - Goes through binary tree using level-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 * @height: binary_tree_height
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;
	
	if (tree == NULL || func == NULL)
		return;
	
	height = binary_tree_height(tree) + 1;
	for (i = 0; i < height; i++)
		binary_tree_print_level(tree, i, func);
}

/**
 * binary_tree_print_level - Prints nodes at a given level.
 * @tree: A pointer to the root node of the tree to traverse.
 * @level: The level at which to print nodes.
 * @func: A pointer to a function to call for each node.
 */

void binary_tree_print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		binary_tree_print_level(tree->left, level - 1, func);
		binary_tree_print_level(tree->right, level - 1, func);
	}
}
