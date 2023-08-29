#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a node in a binary tree.
 * @tree: pointer to the node to measure depth.
 * 
 * Return: depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	for (depth = 0; tree->parent != NULL; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
