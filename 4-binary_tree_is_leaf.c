#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a tree node is a leaf
 * @node: tree node
 * Return: 1 if node is a leaf, 0 otherwise
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
