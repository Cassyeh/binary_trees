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
		if (tree->left == NULL && tree->right == NULL && tree->parent == NULL)
		{
			a = 1;
		}
		else if (tree->parent == NULL)
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
		if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
		{
			b = 0 + binary_tree_size(tree->right);
		}
		else if (tree->right == NULL)
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
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t s = binary_tree_size(tree);
	size_t h = binary_tree_height(tree);
	int a = 2;
	int b = h + 1;
	int i;
	int temp = a;
	if (b == 0)
	{
		a = 1;
	}
	else
	{
		for (i = 1; i < b; i++)
		{
			a = a * temp;	
		}
	}
	if (s == (a - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
