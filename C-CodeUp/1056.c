// 참/거짓이 서로 다를 때에만 참 출력하기


#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n,&m);
    printf("%d", (n&&!m)||(!n&&m));
    return 0;
}