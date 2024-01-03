#include "binary_trees.h"

/**
 * binary_tree_is_root - checks is a given node is a root
 * 
 * @node: A pointer to the node to check
 * 
 * return - 1 if node is a root
 *          otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL || node->parent != NULL)
        return 0;
    else
        return 1;
}