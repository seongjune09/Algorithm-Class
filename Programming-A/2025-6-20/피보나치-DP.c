#include <stdio.h>
int fibo(int n);
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
}

long long int a[91] = {0,1,};

int fibo(int n)
{
    if (n < 2) return n;
    else if (a[n] != 0) return a[n];
    else {
        a[n] = fibo(n-1) + fibo(n-2);
        return a[n];
    }
}