#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node{
    int data;
    struct node* left;
    struct node* right;
};


// Creating a new node

struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main(void)
{
    struct node* root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);

    getchar();
    return 0;
}