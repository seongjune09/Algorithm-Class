#include <stdio.h>
int f(int n)
{
    int sum = 1;
    for(int i=1; i<=n; i++) {
        sum = sum * i;
        printf("%d ",sum);
    }
    return sum;
}
int main(void) {
    int n;
    scanf("%d", &n);
    f(n);
}

