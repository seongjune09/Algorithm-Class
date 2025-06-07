// 0 입력될 때까지 무한 출력하기

#include <stdio.h>
int main(void)  {
    int n;
    while (1) {
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
        printf("%d\n", n);
    }
    return 0;
}