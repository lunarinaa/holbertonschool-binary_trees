#include "binary_trees.h"
/**
 * binary_tree_sibling - function to find a sibling of a node
 * @node: pointer to the given node
 * Return: pointer to a sibling node;
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
	{
		if (node->parent->right == NULL)
			return (NULL);
		return (node->parent->right);
	}
	else
		return (node->parent->left);
}

