#include "binary_trees.h"
/**
 * binary_tree_node - function that creates binary tree node
 * @parent: pointer to a parent node
 * @value: value to put in the new node
 * Return: newmode or NULL if failed.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *newnode;
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}

