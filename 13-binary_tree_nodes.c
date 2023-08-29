#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts nodes with at least 1 child.
 * @tree: pointer to the root node.
 *
 * Return: node with child count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count, lefty, righty;

	if (tree == NULL)
	{
		return (0);
	}
	/* check if current node has at least one child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* count current node and recursively count its subtrees */
		lefty = binary_tree_nodes(tree->left);
		righty = binary_tree_nodes(tree->right);
		count = lefty + righty;

		return (1 + count);/* sum of current node and its subtrees */
	}
	return (0);
}
