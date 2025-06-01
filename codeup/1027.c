//년월일 입력 받아 형식 바꿔 출력하기

#include <stdio.h>
int main(void) {
    int y,m,d;
    scanf("%d.%d.%d", &y,&m,&d);
    printf("%02d-%02d-%d", d,m,y);
    return 0;
}