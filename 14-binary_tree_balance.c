#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: 0 if tree is NULL, otherwise the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;  /* Declare variables here */

    if (tree == NULL) {
        return 0;
    }

    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);

    return left_height - right_height;
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: 0 if tree is NULL, otherwise the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;  /* Declare variables here */

    if (tree == NULL) {
        return 0;
    }

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return 1 + (left_height > right_height ? left_height : right_height);
}
