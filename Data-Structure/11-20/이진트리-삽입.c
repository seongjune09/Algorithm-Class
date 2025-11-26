//  BST 삽입

#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{
    element data;
    struct Node *left;
    struct Node *right;
} Node;

void printTree(Node *root)
{
    if (root == NULL)
        return;
    printTree(root->left);
    printf("%d ", root->data);
    printTree(root->right);
}

int main()
{
    Node node5 = {60, NULL, NULL};
    Node node4 = {12, NULL, NULL};
    Node node3 = {9, NULL, NULL};
    Node node2 = {3, NULL, NULL};
    Node node1 = {8, &node2, &node3};
    Node node0 = {10, &node1, &node4};
    Node node_root = {25, &node0, &node5};

    // 새로 삽입할 노드(값 4)
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = 4;
    new->left = NULL;
    new->right = NULL;

    // BST 규칙에 따라 값 4 삽입
    if (4 < node_root.data) // 4 < 25
    {
        if (4 < node0.data) // 4 < 10
        {
            if (4 < node1.data) // 4 < 8
            {
                if (4 > node2.data) // 4 > 3 오른쪽 삽입
                {
                    node2.right = new;
                }
            }
        }
    }

    printTree(&node_root);

    return 0;
}
