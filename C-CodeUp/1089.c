// 수 나열하기1

#include <stdio.h>
int main(void) {
    int a,d,n;
    scanf("%d %d %d", &a,&d,&n);
    int sum = a;
    for(int i=0; i<n-1; i++) {
        sum = sum + d;
    }
    printf("%d", sum);
    return 0;
}