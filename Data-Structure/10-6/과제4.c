// 4. 노드의 개수를 입력받고 연결리스트 생성, 데이터 입력받아서 저장, 입력 받는 수의 위치에 존재하는 노드 삭제
// (1이면 첫번째 노드 삭제, 3이면 세번째 노드 삭제, 연결리스트 길이보다 큰 수라면 에러 출력)

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
    int n;
    scanf("%d", &n);

    // if (n == 1) { // n번째의 노드 삭제

    // }

    // if (n > //연결리스트 길이) {

    //     }

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
