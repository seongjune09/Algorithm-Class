// 언제까지 더해야 할까?

#include <stdio.h>
int main(void)  {
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        sum += i;
        if(sum >= n) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}