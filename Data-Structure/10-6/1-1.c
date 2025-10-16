#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int d;
    struct Node *next;
} Node;

Node *cN(int d)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->d = d;
    n->next = NULL;
    return n;
}
void pL(Node *h)
{
    Node *c = h;
    while (c != NULL)
    {
        printf("%d -> ", c->d);
        c = c->next;
    }
    printf("NULL");
}
Node *front(Node *h, int d)
{
    Node *n = cN(d);
    n->next = h;
    return n;
}
Node *middle(Node *h, int d)
{
    if (h == NULL)
        return cN(d);
    Node *s = h;       // 1칸
    Node *f = h->next; // 2칸
    while (f != NULL && f->next != NULL)
    { // f가 리스트 끝또는 끝 바로 앞에 도달할 때까지 반복
        s = s->next;
        f = f->next->next;
    }
    Node *n = cN(d);   // 새 노드
    n->next = s->next; // 새 노드 next -> s 다음 로드
    s->next = n;       // s의 next -> 새 노드
    return h;          // 해드 안바뀜 반환
}
int main()
{
    int N, d, s;
    Node *h = NULL;
    Node *l = NULL;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &d);
        Node *n = cN(d);
        if (h == NULL)
        {
            h = n;
            l = n;
        }
        else
        {
            l->next = n;
            l = n;
        }
    }
    scanf("%d %d", &s, &d);

    if (s == 1)
    {
        h = front(h, d);
    }
    else if (s == 2)
    {
        h = middle(h, d);
    }
    else
    {
        printf("ERROR");
    }
    pL(h);
    Node *c = h;
    while (c != NULL)
    {
        Node *temp = c;
        c = c->next;
        free(temp);
    }
    return 0;