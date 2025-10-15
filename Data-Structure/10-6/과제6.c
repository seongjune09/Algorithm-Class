// 6. 노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장, 역순으로 연결리스트를 변환하고 데이터 출력

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

    // Node *reverselist 역순으로 뒤집는 함수 생성

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

    Node *p = head;
    while (p != NULL)
    {
        printf("%c ", p->data);
        p = p->next;
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
