#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as te left
 * child of another node.
 * 
 * @parent: pointer to the node to insert the left child in.
 * @value: the value to store the new node.
 * 
 * Return: On success, a pointer to the created node, NULL on failure,
 * or when parent in NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = value;
	new_node->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}

	return (new_node);
}