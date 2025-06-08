// 3X3배열의 대칭 판별

#include <stdio.h>
int main(void) {
    int arr[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] != arr[j][i]) {
                printf("대칭이 아닙니다.");
                return 0;
            }
        }
    }
    printf("대칭입니다.");
    return 0;
}