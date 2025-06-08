// 3X3배열의 대각선 합 출력

#include <stdio.h>
int main(void) {
    int arr[3][3];
    int sum = 0 , sum2 = 0, sum3 = 0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i == j) {
                sum = sum + arr[i][j];
            }
            if(i +j == 2) {
                sum2 = sum2 +arr[i][j];
            }
        }
    }
    sum3 = sum + sum2;
    printf("%d", sum3);
    return 0;
}