#include "binary_trees.h"
/**
 * binary_tree_uncle - function to find the uncle of a node
 * @node: pointer to the given node;
 * Return: pointer to the uncle node;
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		return (node->parent->parent->right);
	}
	else
		return (node->parent->parent->left);
}

