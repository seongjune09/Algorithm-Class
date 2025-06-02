#include <stdio.h>
int main(void) {
    int arr[6];
    int arr2[6];
    for(int i = 0; i<6; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<6; i++) {
        arr2[5-i] = arr[i];
    }
    for(int i = 0; i<6; i++) {
        printf("%d", arr2[i]);
    }
    return 0;
}