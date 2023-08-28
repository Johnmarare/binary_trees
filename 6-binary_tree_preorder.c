#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses using pre-order.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call each node.
 * Value in the node must be passed as a param to this function.
 *
 * Return: Nothing.(void).
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
