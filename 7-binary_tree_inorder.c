#include "binary_trees.h"
/**
 * binary_tree_inorder - Function that goes through a binary using inorder  traversal.
 * @tree: pointer to th root node of the tree traverse.
 * @func: pointer to a function to call for each node.
 * The node value must be passed as a param to this function.
 *
 * Return: Nothing(void).
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
