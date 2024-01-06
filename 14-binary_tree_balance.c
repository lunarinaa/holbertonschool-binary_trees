#include "binary_trees.h"
/**
 * binary_tree_height - function to determine the height of binary tree
 * @tree: pointer to the root
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t  left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		return (1 + left_h);
	else
		return (1 + right_h);
}

/**
 * binary_tree_balance - function to determine bt balance
 * @tree: pointer to the root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

