#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts left child node
 * @parent: pointer to the parent node
 * @value: value to insert
 * Return: new node or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	struct binary_tree_s *newnode, *temp;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	return (NULL);
	if (parent->left == NULL)
	{
		parent->left = newnode;
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->parent = parent;
	}
	else
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->n = value;
		newnode->right = NULL;
		newnode->left = temp;
		newnode->parent = parent;
		temp->parent = newnode;
	}
	return (newnode);
}

