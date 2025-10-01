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

        Node *newNode = (Node *)malloc(sizeof(Node));

        newNode->data = value;
        newNode->next = NULL;

        if (head != NULL)
        {
            tail->next = newNode;
            tail = newNode;
        }

        else
        {
            head = newNode;
            tail = newNode;
        }
    }
}