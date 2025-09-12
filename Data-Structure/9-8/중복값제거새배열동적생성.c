#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, d, count = 0;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int *arr1 = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        d = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr1[j])
            {
                d = 1;
            }
        }
        if (!d)
        {
            arr1[count++] = arr[i];
        }
    }

    arr1 = (int *)realloc(arr1, count * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}