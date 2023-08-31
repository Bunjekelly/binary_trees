#include "binary_trees.h"

/**
 * binary_tree_uncle - This is a function that finds the uncle
 * of a node
 * @node: This is a pointer to the node to find the uncle
 * Return: NULL or 0
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *my_uncle;
	
	if (node == NULL || node->parent == NULL)
		return (NULL);

	my_uncle = binary_tree_sibling(node->parent);
	return (my_uncle);
}

/**
 * binary_tree_sibling - This a function that finds the siblings of
 * a node
 * @node: This is a pointer to the node
 * Return: silbing or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
