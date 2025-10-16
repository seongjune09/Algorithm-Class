// 1. 노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장, 정수 입력받고 입력 받은 수가 저장되어 있는 노드 위치 출력

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

    int n, value;
    Node *head = NULL;
    Node *tail = NULL;

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

    int t;
    scanf("%d", &t);

    Node *p = head;
    int ps = 1;

    while (p != NULL)
    {
        if (p->data == t)
        {
            printf("%d\n", ps);
            break;
        }
        p = p->next;
        ps++;
    }

    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}