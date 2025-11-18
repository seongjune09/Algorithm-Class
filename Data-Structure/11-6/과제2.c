// 2. 전위, 중위, 후위 순회 하나의 프로그램 안에서 출력(Node N1={10, &N2, &N3} 이렇게 초기화해서 만들어도 됨)

#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{
    element data;
    struct Node *left; // 링리는 next를 연결하지만 이진트리는 왼쪽, 오른쪽의 자식을 연결하기 때문에
    struct Node *right;
} Node;

void preorder(Node *root) // 전위 순회 함수
{
    printf("%d ", root->data); // 루트 노드의 데이터를 출력
    preorder(root->left);      // 왼쪽 트리를 재귀 호출
    preorder(root->right);     // 오른쪽 트리를 재귀 호출
}

int main(void)
{

    int n;
    scanf("%d", &n);

    Node *node[n]; // 노드 포인트 배열 사용 n개의 배열 생성
    for (int i = 0; i < n; i++)
    {
        node[i] = (Node *)malloc(sizeof(Node)); // 각 배열에 동적메모리로 노드 구조체 생성
        scanf("%d", &node[i]->data);            // i++ 되면서 i자리에 데이터 값 넣어주기
        node[i]->left = NULL;                   // 링리 처럼 처음 left와 right는 널값
        node[i]->right = NULL;
    }

    for (int i = 0; i < n; i++)
    {
        if (2 * i + 1 < n) // 루트는 인덱스가 0이 됨 2 * i + 1을 해서 n보다 작다면 왼쪽 자식에 저장
        {
            node[i]->left = node[2 * i + 1];
        }
        if (2 * i + 2 < n) // 2 * i +2 를 했을 때 n보다 작으면 오른쪽 자식에 저장
        {
            node[i]->right = node[2 * i + 2];
        }
    }

    preorder(node[0]); // 루트 노드에서부터 전위순회
    printf("\n");

    for (int i = 0; i < n; i++)
        free(node[i]);

    return 0;
}
