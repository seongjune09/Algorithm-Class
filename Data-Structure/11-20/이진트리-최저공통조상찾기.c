// 4. BST 사용자 입력 받고, 두 노드 A, B가 주어졌을 때, BST에서 두 노드의 최저 공통 조상 찾기

#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct Node
{
    element data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(element data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// BST 삽입
Node *insert(Node *root, element data)
{
    if (root == NULL)
        return createNode(data); // 빈 자리면 삽입

    if (data < root->data)
        root->left = insert(root->left, data); // 왼쪽 삽입
    else if (data > root->data)
        root->right = insert(root->right, data); // 오른쪽 삽입

    return root;
}

// 공통 조상 찾는 함수

// 중위 순회
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
    Node *root = NULL;
    int n, value, A, B;

    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        root = insert(root, value);
    }

    printf("\n중위 순회 결과: ");
    printTree(root);

    return 0;
}