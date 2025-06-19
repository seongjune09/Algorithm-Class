//  참/거짓이 서로 같을 때에만 참 출력하기


#include <stdio.h>
int main(void)  {
    int n,m;
    scanf("%d %d", &n,&m);
    if(n == m) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}