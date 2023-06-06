#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t a;
		size_t b;
		if (tree->parent == NULL)
		{
			a = 0 + binary_tree_size(tree->left);
		}
		else if (tree->left == NULL && tree->right == NULL)
		{
			a = 1;
		}
		else if (tree->left == NULL)
		{
			a = 0;
		}
		else
		{
			a = 1 + binary_tree_size(tree->left);
		}
		if (tree->right == NULL)
		{
			b = 0;
		}
		else
		{
			b = 1 + binary_tree_size(tree->right);
		}
		return (a+b);
	}
}
