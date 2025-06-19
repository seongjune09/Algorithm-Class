// 3 6 9 게임의 왕이 되자!

#include <stdio.h>
int main(void) {
    int n;
    char sum;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if(i%3==0) {
            printf("X ");
        }
        else {
            printf("%d ", i);
        }
    }
    return 0;
}