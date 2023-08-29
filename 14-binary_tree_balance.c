#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: pointer to the root node.
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_factor, height_left, height_right;

	height_left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	bal_factor = height_left - height_right;

	return (bal_factor);
}
