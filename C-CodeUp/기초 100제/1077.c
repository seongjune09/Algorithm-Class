// 정수 1개 입력받아 그 수까지 출력하기

#include <stdio.h>
int main(void)  {
    int n,i;
    scanf("%d", &n);
    for(int i=0; i<=n; i++) {
        printf("%d\n", i);
    }

    return 0;
}