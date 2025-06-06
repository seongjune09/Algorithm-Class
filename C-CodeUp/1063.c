// 두 정수 입력받아 큰 수 출력하기


#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n,&m);
    printf("%d", n > m ? n:m);
    return 0;
}