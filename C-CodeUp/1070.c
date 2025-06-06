// 월 입력받아 계절 출력하기


#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if(n == 12 || n == 1 || n == 2) {
        printf("winter");
    }
    else if(n%3==1) {
        printf("spring");
    }
    else if(n%3==2) {
        printf("summer");
    }
    else {
        printf("fall");
    }
    return 0;
}