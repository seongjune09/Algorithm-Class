#include <stdio.h>
long long fibo(int n);
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld", fibo(n));
}
long long int a[91]={0,1,};

long long fibo(int n)
{
    if(n < 2) return n;
    else if(a[n] != 0) return a[n];
    else {
        a[n] = fibo(n-1) + fibo(n-2);
        return a[n];
    }
}
