// 연월일 입력받아 그대로 출력하기

#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d.%d.%d", &a,&b,&c);
    printf("%.4d.%.2d.%.2d", a,b,c);
    return 0;
}