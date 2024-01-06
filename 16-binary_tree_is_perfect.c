#include "binary_trees.h"
/**
 * is_perfect - helper function to chech if tree is perfect
 * @tree: pointer to the root node
 * Return: 0 or any height
 */
int is_perfect(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree->left && tree->right)
	{
		left_h = 1 + is_perfect(tree->left);
		right_h = 1 + is_perfect(tree->right);
		if (right_h == left_h && right_h != 0 && left_h != 0)
			return (right_h);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - function to determine if tree is  perfect or not
 * @tree: pointer to the root node
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
