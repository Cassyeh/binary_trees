#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t a;
		size_t b;
		if (tree->left == NULL)
		{
			a = 0;
		}
		else
		{
			a = 1 + binary_tree_height(tree->left);
		}
		if (tree->right == NULL)
		{
			b = 0;
		}
		else
		{
			b = 1 + binary_tree_height(tree->right);
		}
		if (a < b)
		{
			return (b);
		}
		return (a);
	}
}

/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t a;
		size_t b;
		if (tree->left == NULL) 
		{
			a = 0;
		}
		else
		{
			a = 1 + binary_tree_height(tree->left);
		}
		if (tree->right == NULL)
		{
			b = 0;
		}
		else
		{
			b = 1 + binary_tree_height(tree->right);
		}
		return (a - b);
	}
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int a = binary_tree_balance(tree);
	if (a == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
