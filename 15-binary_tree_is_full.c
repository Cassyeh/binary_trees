#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int a;
		int b;
		a = binary_tree_is_full(tree->left);
		b = binary_tree_is_full(tree->right);
		if (a == b) 
		{
			return(1);
		}
		else
		{
			return(0);
		}
	}
}
