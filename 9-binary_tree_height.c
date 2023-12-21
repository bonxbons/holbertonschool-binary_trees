#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_node - Creates a binary tree node.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(int value) {
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return (NULL);
    }

    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree) {
    if (!tree) {
        return 0;
    }

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return 1 + (left_height > right_height ? left_height : right_height);
}

int main(void) {
    binary_tree_t *root;

    root = binary_tree_node(98);
    root->left = binary_tree_node(50);
    root->right = binary_tree_node(100);

    size_t height = binary_tree_height(root);
    printf("Height of tree with root node (98): %zu\n", height);

    return (0);
}
