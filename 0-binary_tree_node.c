#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"



/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *binary_tree_node = (binary_tree_t*)malloc(sizeof(binary_tree_t));

    if (binary_tree_node == NULL)
        return NULL;

    binary_tree_node->n = value;
    binary_tree_node->parent = parent;
    binary_tree_node->left = NULL;
    binary_tree_node->right = NULL;

    return binary_tree_node;
}