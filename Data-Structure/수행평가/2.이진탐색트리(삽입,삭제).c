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

T *insert_jaegui(T *n, int key)
{

    if (n == NULL)
    {
        return create(key);
    }
    if (n->data < key)
    {
        n->right = insert_jaegui(n->right, key);
    }
    else if (n->data > key)
    {
        n->left = insert_jaegui(n->left, key);
    }

    return n;
};

T *serach_min(T *n)
{
    while (n->left != NULL)
    {
        n = n->left;
    }
    return n;
}

T *Delete(T *n, int key)
{
    if (n == NULL)
        return NULL;

    if (n->data < key)
    {
        n->right = Delete(n->right, key);
    }
    else if (n->data > key)
    {
        n->left = Delete(n->left, key);
    }
    else
    {
        if (n->left == NULL)
        {
            T *c = n->right;
            free(n);
            return c;
        }
        else if (n->right == NULL)
        {
            T *temp = n->left;
            free(n);
            return temp;
        }
        T *t = search_min(n->right);
        n->data = t->data;
        n->right = Delete(n->right, t->data);
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