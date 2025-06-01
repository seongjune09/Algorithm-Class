//정수 1개 입력받아 나누어 출력하기

#include <stdio.h>
int main(void) {
    int a,b,c,d,e;
    scanf("%1d%1d%1d%1d%1d", &a,&b,&c,&d,&e);
    printf("[%d]\n", a * 10000);
    printf("[%d]\n", b * 1000);
    printf("[%d]\n", c * 100);
    printf("[%d]\n", d * 10);
    printf("[%d]\n", e);
return 0;
}