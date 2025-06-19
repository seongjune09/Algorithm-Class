// 여기까지! 이제 그만~

#include <stdio.h>
int main(void) {
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if(sum >= n) {
            break;
        }
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}