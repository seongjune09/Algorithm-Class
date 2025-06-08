// 2x3이차원배열의 역순 출력

#include <stdio.h>
int main(void) {
    int arr[2][3];
    int sum = 0 , sum2 = 0, sum3 = 0;
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=1; i>-1; i--) {
        for(int j=2; j>-1; j--) {
            printf("%d", arr[i][j]);
            
        }
    }
    return 0;
}