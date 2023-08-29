#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if tree is perfect.
 * @tree: pointer to the root node.
 *
 * Return: 1 if perfect, else 0.
 */

size_t binary_tree_node_count(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = binary_tree_height(tree);
	int node_count = binary_tree_node_count(tree);
	/**
	 * 1 << n == (1*2)^n
	 * The height of a tree in a perfct binary tree can be calculated using
	 * log2(number_of_nodes).
	 * in a perfect binary tree, total number of edges is one less
	 * total number of nodes.
	 */
	return (node_count == (1 << (height + 1)) - 1);
}

/**
 * binary_tree_height - Function that calculates the height of a binary tree.
 * @tree: pointer to the root node.
 *
 * Return: height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + max(left_height, right_height));
}

/**
 * binary_tree_node_count - Function that counts the number of nodes in a
 *                          binary tree.
 * @tree: pointer to the root node.
 *
 * Return: number of nodes in the tree.
 */
size_t binary_tree_node_count(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_node_count(tree->left) +
			binary_tree_node_count(tree->right));
}
