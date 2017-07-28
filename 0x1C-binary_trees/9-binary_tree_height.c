#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: if tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;
	/*
	 * if height_right is greater than height_left
	 * return height_right
	 * else return height_left
	 */
	return (height_right > height_left ? height_right : height_left);
}
