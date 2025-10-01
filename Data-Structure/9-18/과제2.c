// 노드가 4개인 연결리스트 생성해서 데이터 입력받고 데이터의 평균값 출력

#include <stdio.h>
#include <stdlib.h> //malloc을 사용

typedef struct Node // Node 정의
{
    int data;
    struct Node *next; // 다음 노드를 가리킬 포인터
} Node;

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));

    printf("노드 데이터 입력: ");
    scanf("%d", &head->data); // 입력받은 값을 head 노드의 data 필드에 저장

    head->next = NULL; // 다음 노드가 없으므로 NULL
    float avg = (float)head->data;
    printf("평균값: %.2f\n", avg); // 평균값 출력

    free(head); // malloc 해제

    return 0;
}