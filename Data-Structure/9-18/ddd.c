#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의
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

    printf("입력할 노드 수: ");
    scanf("%d", &n);

    // if (n <= 0) {
    //     printf("노드 개수는 1 이상이어야 합니다.\n");
    //     return 0;
    // }

    // 노드 생성
    for (int i = 0; i < n; i++)
    {
        // printf("%d번째 값 입력: ", i + 1);
        // scanf("%d", &value);

        Node *newNode = (Node *)malloc(sizeof(Node));

        if (newNode == NULL)
        { // 메모리 할당 실패 체크
            printf("메모리 할당 실패\n");
            exit(1); // 프로그램 종료
        }

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        { // 첫 노드라면 head와 tail 초기화
            head = newNode;
            tail = newNode;
        }
        else
        { // tail을 이용해 새 노드 연결
            tail->next = newNode;
            tail = newNode;
        }
    }

    // 출력
    printf("\n입력된 연결 리스트: ");
    Node *cur = head;
    while (cur != NULL)
    {
        printf("%d → ", cur->data);
        cur = cur->next;
    }
    printf("NULL\n");

    // 메모리 해제
    cur = head;
    while (cur != NULL)
    {
        Node *nextNode = cur->next;
        free(cur);
        cur = nextNode;
    }

    return 0;
}
