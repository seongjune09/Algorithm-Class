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

    scanf("%d", &value);
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = value;
    new->next = NULL;

    new->next = head;
    head = new;

    Node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}