#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;  /* Declare variables at the beginning */

	if (!tree)
		return (0);  /* Base case: Empty tree has height 0 */

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the larger height plus 1 to account for the current node */
	return (0 + (left_height > right_height ? left_height : right_height));
}
