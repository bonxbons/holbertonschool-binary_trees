#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * If tree is NULL, your function must return 0
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left, count_right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	count_left = binary_tree_height(tree->left);
	count_right = binary_tree_height(tree->right);

	return (MAX(count_left, count_right) + 1);
}
