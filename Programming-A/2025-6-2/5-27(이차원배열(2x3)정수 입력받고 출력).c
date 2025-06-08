// 이차원배열 2x3 정수 입력받고 출력

#include <stdio.h>
int main(void) {
    int arr[2][3];
    int sum = 0 , sum2 = 0, sum3 = 0;
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
                printf("%d", arr[i][j]);
        }
    }
    return 0;
}