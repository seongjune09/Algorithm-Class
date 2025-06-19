// 정수 3개 입력받아 합과 평균 출력하기


#include <stdio.h>
int main(void) {
    long long int a,b,c;
    scanf("%lld %lld %lld", &a,&b,&c);
    printf("%lld\n%.1f", a+b+c,(float)(a+b+c)/3);
    return 0;
}