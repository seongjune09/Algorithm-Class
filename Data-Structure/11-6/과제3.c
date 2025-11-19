// 3. 중위 순회 재귀 사용하지 않고 반복문으로 만들기(스택 사용해야됨)

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL;

struct Node *stack[101] = {
    0,
};
int top = -1;

void free_order(struct Node *root)
{
    if (root == NULL)
        return;
    free_order(root->left);
    free_order(root->right);
    free(root);
}

int insert_node(struct Node *root, struct Node *cur)
{
    struct Node *queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front < rear)
    {
        struct Node *node = queue[front++];

        if (node->left == NULL)
        {
            node->left = cur;
            return 1;
        }
        else if (node->right == NULL)
        {
            node->right = cur;
            return 1;
        }
        else
        {
            queue[rear++] = node->left;
            queue[rear++] = node->right;
        }
    }
    return 0;
}
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        struct Node *cur = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &cur->data);
        cur->left = NULL;
        cur->right = NULL;
        if (root == NULL)
        {
            root = cur;
            continue;
        }
        insert_node(root, cur);
    }
    stack[++top] = root;
    printf("==inorder==\n");
    while (top >= 0)
    {
        if (stack[top]->left)
        {
            int prev = top;
            stack[++top] = stack[prev]->left;
            stack[prev]->left = NULL;
            continue;
        }
        printf("%d\n", stack[top]->data);
        if (stack[top]->right)
        {
            int prev = top--;
            stack[++top] = stack[prev]->right;
            stack[prev]->right = NULL;
            continue;
        }
        stack[top--] = 0;
    }
    printf("==inorder process done==");
    free_order(root);
    return 0;
}