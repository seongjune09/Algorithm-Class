#include <stdio.h>
#define MAX 100

int heap[MAX];
int size = 0;

void insert(int key)
{
    int i = ++size;
    while (i != 1 && key < heap[i / 2])
    {
        heap[i] = heap[i / 2];
        i /= 2;
    }
    heap[i] = key;
}

int delete()
{
    int root = heap[1];
    int temp = heap[size--];
    int parent = 1, child = 2;

    while (child <= size)
    {
        if (child < size && heap[child] > heap[child + 1])
            child++;
        if (temp <= heap[child])
            break;
        heap[parent] = heap[child];
        parent = child;
        child *= 2;
    }

    heap[parent] = temp;
    return root;
}

// int main(void)
// {
//     insert(30);
//     insert(10);
//     insert(50);
//     insert(40);
//     printf("삭제된 요소: %d\n", delete());
//     printf("삭제된 요소: %d\n", delete());

//     return 0;
// }