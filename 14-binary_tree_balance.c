#include "binary_trees.h"

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
		int a;
		int b;
		if (tree->left == NULL) 
		{
			a = 0;
		}
		else
		{
			a = 1 + binary_tree_balance(tree->left);
		}
		if (tree->right == NULL)
		{
			b = 0;
		}
		else
		{
			b = 1 + binary_tree_balance(tree->right);
		}
		return (a - b);
	}
}
