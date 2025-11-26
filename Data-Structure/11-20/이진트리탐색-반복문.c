#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{
    element data;
    struct Node *left;
    struct Node *right;
} Node;

int main(void)
{

    Node node5 = {60, NULL, NULL};
    Node node4 = {12, NULL, NULL};
    Node node3 = {9, NULL, NULL};
    Node node2 = {3, NULL, NULL};
    Node node1 = {8, &node2, &node3};
    Node node0 = {10, &node1, &node4};
    Node node_root = {25, &node0, &node5};

    int key;
    scanf("%d", &key);

    Node *node = &node_root;
    while (node != NULL)
    {
        if (node->data == key)
        {
            break;
        }

        else if (node->data < key)
        {
            node = node->right;
        }

        else if (node->data > key)
        {
            node = node->left;
        }
    }
    printf("%d", node->data);
    return 0;
}