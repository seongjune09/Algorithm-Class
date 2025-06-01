//정수 2개 입력받아 자동 계산하기 


#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n,&m);
    printf("%d\n", n+m);
    printf("%d\n", n-m);
    printf("%d\n", n*m);
    printf("%d\n", n/m);
    printf("%d\n", n%m);
    printf("%.2f", (float)n/m);
return 0;
}