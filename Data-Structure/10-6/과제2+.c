// 2. 노드의 개수를 입력받고 연결리스트 생성, 문자열을 입력받아서 저장, 전체 문자열 출력

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char *data;
    struct Node *next;
} Node;

int main(void)
{
    int n;
    char value[100];

    Node *head = NULL;
    Node *tail = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", value);
        Node *new = (Node *)malloc(sizeof(Node));
        new->data = (char *)malloc(strlen(value) + 1);

        strcpy(new->data, value);
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
        printf("%s ", p->data);
        p = p->next;
    }

    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp->data);
        free(temp);
    }

    return 0;
}