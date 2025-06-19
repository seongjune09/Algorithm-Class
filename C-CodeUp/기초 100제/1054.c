// 둘 다 참일 경우만 참 출력하기


#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n,&m);
    printf("%d", n&&m);
    return 0;
}