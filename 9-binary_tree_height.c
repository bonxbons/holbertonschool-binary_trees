#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}
