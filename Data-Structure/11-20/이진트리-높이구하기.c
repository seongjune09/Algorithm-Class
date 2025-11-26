// 3. BST 사용자 입력 받고 삽입, 삭제 후 높이 구하기

#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct Node
{
    element data;
    struct Node *left;
    struct Node *right;
} Node;

Node *new(element data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}

// 삽입 하는 함수

// 삭제하는 함수

// 트리 높이 계산 함수
int height(Node *root)
{
    if (root == NULL)
        return -1;

    int leftH = height(root->left);
    int rightH = height(root->right);

    return (leftH > rightH ? leftH : rightH) + 1;
}

// 중위 순회 출력 함수
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
    int n;

    printTree(root);
    printf("\n트리 높이: %d\n", height(root));

    return 0;
}