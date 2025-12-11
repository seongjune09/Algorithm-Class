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
}

T *insert(T *n, int key)
{
    if (n == NULL)
    {
        return create(key);
    }
    if (n->data < key)
    {
        n->right = insert(n->right, key);
    }
    else if (n->data > key)
    {
        n->left = insert(n->left, key);
    }
    return n;
}

T *search_min(T *n)
{
    while (n->left != NULL)
    {
        n = n->left;
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

        T *t = search_min(n->right);
        n->data, t->data;
        n->right = delete(n->right, t->data);
    }
    return n;
}