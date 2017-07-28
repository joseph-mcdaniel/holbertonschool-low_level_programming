#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @node: pointer to the node to measure the depth of
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth;

	for (depth = 0; node && node->parent; depth++)
		node = node->parent;
	return (depth);
}
