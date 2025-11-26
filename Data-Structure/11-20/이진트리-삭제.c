//  BST 삭제

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

    // 3삭제
    node1.left = NULL; // 부모 node1에서 3 연결 제거
    free(&node2);

    printTree(&node_root);

    return 0;
}
