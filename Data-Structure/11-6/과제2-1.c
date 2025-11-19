// 2-1. 사용자 입력 트리 생성해서(위의 1번이나 1-1 방법 사용하면 됨) 전위, 중위, 후위 어떤거 출력할 것인지 입력받고 해당 순회 방법 출력

#include <stdio.h>
#include <stdlib.h>

// 노드 구조체
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// 노드 생성 함수
Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 이진트리 입력 (전위 방식: -1 입력 시 NULL)
Node *buildTree()
{
    int val;
    scanf("%d", &val);

    if (val == -1)
        return NULL;

    Node *root = newNode(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

// 전위 순회
void preorder(Node *root)
{
    if (!root)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// 중위 순회
void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// 후위 순회
void postorder(Node *root)
{
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    Node *root = buildTree();

    int menu;
    scanf("%d", &menu);

    printf("\n출력 결과: ");
    if (menu == 1)
        preorder(root);
    else if (menu == 2)
        inorder(root);
    else if (menu == 3)
        postorder(root);

    printf("\n");
    return 0;
}