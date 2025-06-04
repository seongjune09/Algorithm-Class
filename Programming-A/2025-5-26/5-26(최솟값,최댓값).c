#include <stdio.h>
int main(void) {
    int arr[6];
    int min=500;
    int max=0;
    for(int i=0; i<6; i++) {
        scanf("%d", &arr[i]);
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }

    }
    printf("최소 %d 최대 %d", min,max);
    return 0;
}