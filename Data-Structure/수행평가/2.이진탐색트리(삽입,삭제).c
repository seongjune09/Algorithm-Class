#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;
Node *head = NULL;
Node *find(Node *temp, int mamafafa)
{
    if (temp == NULL)
        return NULL;
    if (temp->data == mamafafa)
        return temp;
    Node *iamtanos = find(temp->left, mamafafa);
    if (iamtanos != NULL)
        return iamtanos;
    return find(temp->right, mamafafa);
}
void wuwi(Node *a)
{
    if (a != NULL)
    {
        wuwi(a->left);
        wuwi(a->right);
        free(a);
    }
}
void jungwi(Node *a)
{
    if (a != NULL)
    {
        jungwi(a->left);
        printf("%d ", a->data);
        jungwi(a->right);
    }
}
void createNode(Node *temp, Node *jasic, char *leri)
{
    if (temp == NULL)
    {
        printf("잘못된 응답\n");
        exit(0);
    }
    if (strcmp(leri, "l") == 0)
    {
        if (temp->left == NULL)
            temp->left = jasic;
        else
        {
            printf("왼쪽에 넣을수가 없어요 오류오류\n");
            exit(0);
        }
    }
    else
    {
        if (temp->right == NULL)
            temp->right = jasic;
        else
        {
            printf("오류입니다. 당신은 실패했어요.\n");
            exit(0);
        }
    }
}
Node *sap(Node *temp, int key)
{
    if (head == NULL)
    {
        Node *newtemp = (Node *)malloc(sizeof(Node));
        newtemp->data = key;
        newtemp->left = NULL;
        newtemp->right = NULL;
        head = newtemp;
        return NULL;
    }
    if (temp->data == key)
    {
        printf("트리에 같은 데이터 안됨\n");
        exit(0);
    }
    if (temp->data > key)
    {
        if (temp->left == NULL)
        {
            Node *newtemp = (Node *)malloc(sizeof(Node));
            newtemp->data = key;
            newtemp->left = NULL;
            newtemp->right = NULL;
            temp->left = newtemp;
            return NULL;
        }
        else
            sap(temp->left, key);
    }
    else if (temp->data < key)
    {
        if (temp->right == NULL)
        {
            Node *newtemp = (Node *)malloc(sizeof(Node));
            newtemp->data = key;
            newtemp->left = NULL;
            newtemp->right = NULL;
            temp->right = newtemp;
            return NULL;
        }
        else
            sap(temp->right, key);
    }
}
Node *sac(Node *temp, int key)
{
    if (head == NULL)
    {
        printf("삭제할게 없습니다.\n");
        return NULL;
    }
    if (key == temp->data)
    {
        int jasic = 0;
        if (temp->left != NULL)
            jasic++;
        if (temp->right != NULL)
            jasic++;
        if (jasic == 0)
        {
            free(temp);
            return NULL;
        }
        else if (jasic == 1)
        {
            Node *jasicio;
            if (temp->left != NULL)
            {
                jasicio = temp->left;
            }
            else
            {
                jasicio = temp->right;
            }
            free(temp);
            return jasicio;
        }
        else
        {
            Node *p = temp->right;
            while (p->left != NULL)
            {
                p = p->left;
            }
            temp->data = p->data;
            temp->right = sac(temp->right, p->data);
            return temp;
        }
    }
    if (key < temp->data)
        temp->left = sac(temp->left, key);
    else if (key > temp->data)
        temp->right = sac(temp->right, key);
    return temp;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        char leri[10];
        int mamafafa;
        scanf("%d %d %s", &mamafafa, &temp->data, leri);
        temp->left = NULL;
        temp->right = NULL;
        if (i == 0)
            head = temp;
        else
            createNode(find(head, mamafafa), temp, leri);
    }
    printf("삽입할거면 1, 삭제할꺼면 2를 입력하시오.");
    int sapze; // 삽입 삭제
    scanf("%d", &sapze);
    if (sapze == 1)
    {
        int sapip;
        scanf("%d", &sapip);
        sap(head, sapip);
    }
    else if (sapze == 2)
    {
        int sacze;
        scanf("%d", &sacze);
        head = sac(head, sacze);
    }
    jungwi(head);
    printf("\n");
    wuwi(head);
}