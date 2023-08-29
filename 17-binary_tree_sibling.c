#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib_node_left, *sib_node_right;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	sib_node_left = node->parent->left;
	sib_node_right = node->parent->right;

	/* check if both siblings exist */
	if (sib_node_left != NULL && sib_node_right != NULL)
	{
		if (node == sib_node_left)
		{
			return (sib_node_right);
		}
		else
		{
			return (sib_node_left);
		}
	}
	return (NULL);
}
