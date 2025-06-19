// 하나라도 참이면 참 출력하기



#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n,&m);
    printf("%d", n||m);
    return 0;
}