#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree.
 * @tree: pointer to root node of the tree.
 *
 * Return: leaf count.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count, left_leaves, right_leaves;

	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left) == NULL && (tree->right) == NULL)
	{
		return (1); /* A leaf node is found */
	}
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	count = left_leaves + right_leaves;

	return (count);
}
