// 이차원배열 전체합의 역순 출력

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
            sum = sum + arr[i][j];
            
        }
    }
    printf("%d", sum);
    return 0;
}