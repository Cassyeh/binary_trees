#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: is a pointer to the root node of the tree to
 * count the number of nodes
 *
 * Return: amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
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
			a = 0;
		}
		else if (tree->parent == NULL)
		{
			a = 1 + binary_tree_nodes(tree->left);
		}
		else if (tree->left == NULL && tree->right == NULL)
		{
			a = 0;
		}
		else if (tree->left == NULL)
		{
			a = 1;
		}
		else
			a = 1 + binary_tree_nodes(tree->left);
		if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
		{
			b = 0 + binary_tree_nodes(tree->right);
		}
		else if (tree->right == NULL)
		{
			b = 0;
		}
		else
			b = 0 + binary_tree_nodes(tree->right);
		return (a + b);
	}
}
