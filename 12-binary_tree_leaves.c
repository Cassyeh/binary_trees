#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves in tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
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
			a = 0 + binary_tree_leaves(tree->left);
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
			a = 0 + binary_tree_leaves(tree->left);
		}
		if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
		{
			b = 0 + binary_tree_leaves(tree->right);
		}
		else if (tree->right == NULL)
		{
			b = 0;
		}
		else
		{
			b = 0 + binary_tree_leaves(tree->right);
		}
		return (a+b);
	}
}
