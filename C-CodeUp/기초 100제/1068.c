// 정수 1개 입력받아 평가 출력하기


#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if(n >= 90 && n <= 100) {
        printf("A\n");
    }
    if(n >= 70 && n <= 89) {
        printf("B\n");
    }
    if(n >= 40 && n <= 69) {
        printf("C\n");
    }
    if(n >= 0 && n <= 39) {
        printf("D\n");
    }
    return 0;
}