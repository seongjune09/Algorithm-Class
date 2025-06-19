// 수 나열하기2

#include <stdio.h>
int main(void) {
    long long a,r,n;
    scanf("%lld %lld %lld", &a,&r,&n);
    long long sum = a;
    for(int i=0; i<n-1; i++) {
        sum = sum * r;
    }
    printf("%lld", sum);
    return 0;
}