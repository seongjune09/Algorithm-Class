#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    free(arr);
    printf("%d", sum);
    return 0;
}