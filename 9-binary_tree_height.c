#include "binary_trees.h"
#include <stddef.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is empty.
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
