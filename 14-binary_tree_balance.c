#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: pointer to the root node.
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_fct;

	if (tree)
	{
		bal_fct = (binary_tree_height(tree->left) - binary_tree_height(tree->right));
		return (bal_fct);
	}
	return (0);
}
/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return (max(left_height, right_height));
}
