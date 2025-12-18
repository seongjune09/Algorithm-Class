#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
} T;

T *create(int key)
{
    T *node = (T *)malloc(sizeof(T));
    node->data = key;
    node->left = NULL;
    node->right = NULL;
    return node;
};

T *search_max(T *n)
{
    while (n->right != NULL)
    {
        n = n->right;
    }
    return n;
}

T *delete(T *n, int key)
{
    if (n == NULL)
    {
        return NULL;
    }
    if (n->data < key)
    {
        n->right = delete(n->right, key);
    }
    else if (n->data > key)
    {
        n->left = delete(n->left, key);
    }
    else
    {
        if (n->right == NULL)
        {
            T *a = n->left;
            free(n);
            return a;
        }
        else if (n->left == NULL)
        {
            T *b = n->right;
            free(n);
            return b;
        }

        T *t = search_max(n->left);
        n->data = t->data;
        n->left = delete(n->left, t->data);
    }
    return n;
}

// void inorder(T *root)
// {
//     if (root == NULL)
//         return;

//     inorder(root->left);
//     printf("%d ", root->data);
//     inorder(root->right);
// }

// int getLevel(T *n)
// {
//     if (n == NULL)
//     {
//         return 0;
//     }
//     int left = getLevel(n->left);
//     int right = getLevel(n->right);

//     return 1 + (left > right ? left : right);
// }

// int getParent(T *A, T *B, T *n)
// {

//     if ((A->data > n->data && B->data < n->data) || (A->data < n->data && B->data > n->data))
//     {
//         return n->data;
//     }

//     if (A->data < n->data && B->data < n->data)
//     {
//         getParent(A, B, n->left);
//     }
//     else if (A->data > n->data && B->data > n->data)
//     {
//         getParent(A, B, n->right);
//     }
// }

// int main(void)
// {

//     T *node_root = insert_jaegui(NULL, 25);
//     insert_jaegui(node_root, 10);
//     insert_jaegui(node_root, 8);
//     insert_jaegui(node_root, 3);
//     insert_jaegui(node_root, 9);
//     insert_jaegui(node_root, 12);
//     Delete(node_root, 10);
//     insert_jaegui(node_root, 60);

//     inorder(node_root);

//     int key;
//     // scanf("%d",&key);

//     // T * delete_node = Delete(node_root,key);

//     inorder(node_root);

//     printf("\n 레벨 : %d\n", getLevel(node_root));

//     // printf("\n");
//     // printf("%d",getParent(node_root->right, node_root->left->left,node_root));
// }