#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree using post-order
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for rach node.
 * value in the node must be passed as a param to this function.
 *
 * Return: Nothing(void).
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
