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

        Node *new(Node *) malloc(sizeof(Node));
    }
}