#include "binary_trees.h"
/**
 * binary_tree_is_full - function to check if bt is full/strict
 * @tree: pointer to the root node
 * Return: 1 if true 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

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
 * binary_tree_is_perfect - function to check if the tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (binary_tree_is_full(tree) && (left_h == right_h))
		return (1);
	return (0);
}

