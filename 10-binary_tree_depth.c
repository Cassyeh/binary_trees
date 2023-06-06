#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree
 *
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		size_t a;
		a = 1 + binary_tree_depth(tree->parent);
		return (a);
	}
}
