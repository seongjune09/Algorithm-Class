// 1. 사용자가 노드 수 입력하면 완전이진트리라고 가정하고 트리 생성(노드 data도 사용자 입력, 노드 포인터 배열 사용)

#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{
    element data;
    struct Node *next;
} Node;

int main(void)
{

    Node *head = NULL;
    Node *tail = NULL;

    int n, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        Node *new = (Node *)malloc(sizeof(Node));

        new->data = value;
        new->next = NULL;

        if (head != NULL)
        {
            tail->next = new;
            tail = new;
        }

        else
        {
            head = new;
            tail = new;
        }
    }
}
