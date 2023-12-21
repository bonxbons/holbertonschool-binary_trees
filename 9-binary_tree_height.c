#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Define the binary tree node structure
typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

// Function to measure the height of a binary tree
size_t binary_tree_height(const binary_tree_t *tree) {
    size_t count_left, count_right;

    if (!tree || (!tree->left && !tree->right))
        return (0);

    count_left = binary_tree_height(tree->left);
    count_right = binary_tree_height(tree->right);

    return (MAX(count_left, count_right) + 1);
}

// Function to create a new binary tree node
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int main() {
    binary_tree_t *root = binary_tree_node(NULL, 50);

    // Build a sample binary tree
    root->left = binary_tree_node(root, 30);
    root->right = binary_tree_node(root, 70);

    root->left->left = binary_tree_node(root->left, 20);
    root->left->right = binary_tree_node(root->left, 40);

    root->right->left = binary_tree_node(root->right, 60);
    root->right->right = binary_tree_node(root->right, 80);

    // Measure the height of the binary tree
    size_t height = binary_tree_height(root);

    printf("Height of the binary tree: %lu\n", height);

    // Free the memory allocated for the binary tree nodes
    free(root->left->left);
    free(root->left->right);
    free(root->right->left);
    free(root->right->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
