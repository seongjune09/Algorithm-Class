// 수 나열하기3

#include <stdio.h>
int main(void) {
    long long int a,m,d,n;
    scanf("%lld %lld %lld %lld", &a,&m,&d,&n);
    long long int result = a;
    for(int i=0; i<n-1; i++) {
        result = result*(m)+d;
    }
    printf("%lld", result);
    return 0;
}