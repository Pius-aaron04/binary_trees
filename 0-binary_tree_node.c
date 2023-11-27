#include "binary_trees.h"
/*
 * binary_tree_node - creates a binary tree node
 * @parent: parent node 
 * @value: node value
 * Return: created node pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
