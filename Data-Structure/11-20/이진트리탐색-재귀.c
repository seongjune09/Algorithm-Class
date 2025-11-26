#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{
    element data;
    struct Node *left;
    struct Node *right;
} Node;

Node *find(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
        return root;
    else
        return (Node *)NULL;
}

Node *LorRight(Node *root, int key)
{
    if (root->data < key)
        return root->right;
    else
        return root->left;
}

Node N7 = {70, NULL, NULL};
Node N6 = {60, NULL, &N7};
Node N5 = {50, NULL, &N6};
Node N4 = {40, NULL, &N5};
Node N3 = {30, NULL, &N4};
Node N2 = {20, NULL, &N3};
Node N1 = {10, NULL, &N2};

int main(void)
{
    int key;
    Node *node = &N1;
    scanf("%d", &key);
    while (find(node, key) == NULL)
    {
        if (node == NULL)
        {
            printf("didn't find");
        }

        node = LorRight(node, key);
    }
    printf("%d", find(node, key)->data);
    return 0;
}