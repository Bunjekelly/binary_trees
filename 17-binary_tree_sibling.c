#include "binary_trees.h"

/**
 * binary_tree_sibling - This is a function that finds the sibling of a node
 * @node: This is a pointer to the node to find the siblings
 * Return: node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
