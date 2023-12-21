#include "binary_trees.h"
#include <stddef.h>

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;  /* Declare variables at the very beginning */

    if (tree == NULL) {
        return 0;  /* Base case: Empty tree has height 0 */
    }

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Return the larger height plus 1 to account for the current node */
    return 1 + (left_height > right_height ? left_height : right_height);
}
