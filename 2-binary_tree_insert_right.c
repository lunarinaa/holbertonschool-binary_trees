#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts right child node
 * @parent: pointer to the parent node
 * @value: value to insert
 * Return: new node or NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	struct binary_tree_s *newnode, *temp;

	if (parent == NULL)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	return (NULL);
	if (parent->right == NULL)
	{
		parent->right = newnode;
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->parent = parent;
	}
	else
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->n = value;
		newnode->right = temp;
		newnode->left = NULL;
		newnode->parent = parent;
		temp->parent = newnode;
	}
	return (newnode);
}

