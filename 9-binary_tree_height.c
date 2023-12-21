#include <stddef.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;  /* Base case: Empty tree has height 0 */
    }

    size_t left_height, right_height;  /* Declare both variables at the beginning */

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    // Return the larger height plus 1 to account for the current node
    return 1 + (left_height > right_height ? left_height : right_height);
}
