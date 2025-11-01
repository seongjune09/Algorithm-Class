#include <stdio.h>
int add(int n)
{
    int sum = 0;
    for(int i=0; i<=n; i++) {
        sum = sum + i;
    }
    return sum;
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", add(n));
}