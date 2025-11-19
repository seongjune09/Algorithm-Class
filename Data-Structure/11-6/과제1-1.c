// 1-1. 사용자 입력 트리 생성 => 완성 시 수행평가 가산점 3점, 완성은 못해도 시도 시 노력에 따라 가산점 1~2점
// (노드 개수 입력 받기, 루트 노드 data 입력 받기, 삽입할 노드 data 입력 받기, 부모 노드 data 입력 받기, 왼쪽인지 오른쪽인지 입력 받기)
// (부모 노드 찾는 함수 필요, 이미 자식이 존재하거나 삽입할 부모 노드 data가 없으면 에러 메세지 출력)

#include <stdio.h>
#include <stdlib.h>

// 노드 구조체
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// 새 노드 생성
Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 부모 노드 찾기 (DFS)
Node *findNode(Node *root, int target)
{
    if (root == NULL)
        return NULL;
    if (root->data == target)
        return root;

    Node *leftSearch = findNode(root->left, target);
    if (leftSearch)
        return leftSearch;

    Node *rightSearch = findNode(root->right, target);
    return rightSearch;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 0)
    {
        return 0;
    }

    int rootData;
    scanf("%d", &rootData);

    // 트리 생성
    Node *root = newNode(rootData);

    // 나머지 n-1개 노드 삽입
    for (int i = 1; i < n; i++)
    {
        int data, parentData, isLeft;

        scanf("%d", &data);
        scanf("%d", &parentData);
        scanf("%d", &isLeft);

        // 부모 노드 탐색
        Node *parent = findNode(root, parentData);
        if (parent == NULL)
        {
            printf("에러: 부모 노드 %d 를 찾을 수 없습니다.\n", parentData);
            i--; // 다시 입력하도록 현재 삽입 취소
            continue;
        }

        // 왼쪽 자식 삽입
        if (isLeft == 1)
        {
            if (parent->left != NULL)
            {
                printf("노드가 존재합니다.\n", parentData);
                i--;
                continue;
            }
            parent->left = newNode(data);
            printf("왼쪽에 삽입 완료\n", data, parentData);
        }
        // 오른쪽 자식 삽입
        else if (isLeft == 2)
        {
            if (parent->right != NULL)
            {
                printf("노드가 존재합니다.\n", parentData);
                i--;
                continue;
            }
            parent->right = newNode(data);
            printf("오른쪽에 삽입 완료\n", data, parentData);
        }
        else
        {
            i--;
        }
    }

    return 0;
}