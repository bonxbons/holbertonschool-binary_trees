#include <stddef.h>
#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height = 0;
    int right_height = 0;

    if (tree == NULL) {
        return 0;
    }

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return left_height - right_height;
}
