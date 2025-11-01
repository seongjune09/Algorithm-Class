#include <stdio.h>
int main(void) {
    int arr[6];
    int sum;
    for(int i=0; i<6; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]%2==1) {
            sum = arr[i];
            printf("%d\n", sum); 
        }
    }
    return 0;
}