#include <stdio.h>
int main(void) {
    int arr[3][3];
    int sum = 0 , sum1 = 0 , sum2 = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i==j) {
                sum = sum + arr[i][j];
            }
            if(i + j == 2) {
                sum1 = sum1 + arr[i][j];
            }
        }
    }
    sum2 = sum + sum1;
    printf("%d", sum2);
    return 0;
}