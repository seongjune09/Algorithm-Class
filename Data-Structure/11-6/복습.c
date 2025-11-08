#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main(void)
{

    Node *head = NULL;
    Node *tail = NULL;

    int n, value;
    scanf("%", &n);

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

    int s;
    scanf("%d", &s);
    scanf("%d", &value);

    int count = 0;
    Node *p = head;

    while (p != NULL)
    {
        count++;
        p = p->next;
    }

    if (s == 1)
    {
        int pos = count / 4;

        Node *new = (Node *)malloc(sizeof(Node));
        new->data = value;

        Node *cur = head;
        for (int i = 0; i < pos - 1; i++)
        {
            cur = cur->next;
        }

        new->next = cur->next;
        cur->next = new;

        if (new->next == NULL)
            tail = new;
    }

    else if (s == 2)
    {
        Node *new = (Node *)malloc(sizeof(Node));
        new->data = value;
        new->next = NULL;

        tail->next = new;
        tail = new;
    }
}