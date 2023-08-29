#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if binary tree is full.
 * @tree: pointer to the root node.
 *
 * Return: 1 if full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* Check if tree is empty */
	if (tree == NULL)
	{
		return (0);
	}
    /* if leaf node */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
    /**
     * if both left and right are not null,
     * and left and right subtrees are full.
     */
	else if ((tree->left) && (tree->right))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
    /* when none of the above conditions work */
	return (0);
}
