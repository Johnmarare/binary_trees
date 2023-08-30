#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds lowest common ansestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: pointer to lowest common ansestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp;
	binary_tree_t *ancestor[200];
	int i, count = 0;

	if (first == NULL || second == NULL)
	{
		return (NULL);/* one or both nodes are null, no ancestor found */
	}

	temp = first;

	/* Traverse the first node ancestors and storing them in the array */
	while (temp)
	{
		ancestor[count++] = (binary_tree_t *)temp;
		temp = temp->parent;
	}

	/* Traverse the second node and check for common ancestors */
	temp = second;
	while (temp)
	{
		temp = temp->parent;

		/* check for common ancestor in first node */
		for (i = 0; i < count; i++)
		{
			if (ancestor[i] == temp)
			{
				return (ancestor[i]); /* common ancestor */
			}
		}
	}
	return (NULL); /* No common ancestor */
}
