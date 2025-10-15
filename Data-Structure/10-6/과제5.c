// 5. 노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장, 저장된 데이터 역순으로 출력 (할 수 있는 사람은 재귀함수로)

#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{
    element data;
    struct Node *next;
} Node;

void Reverse(Node *node)
{
    if (node == NULL)
        return;
    Reverse(node->next);
    printf("%d ", node->data);
}

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

    Reverse(head);

    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}