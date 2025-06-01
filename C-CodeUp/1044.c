// 정수 1개 입력받아 1 더해 출력하기


#include <stdio.h>
int main(void) {
    long long int n,m;
    scanf("%lld %lld", &n,&m);
    printf("%lld", ++n);
    return 0;
}