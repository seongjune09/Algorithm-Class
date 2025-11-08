// 3. 노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장, 1을 입력받으면 제일 처음에 삽입, 2를 입력받으면 연결리스트의 정가운데 삽입

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

        int s;
        scanf("%d", &s);
        scanf("%d", &value);


    }
}