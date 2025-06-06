// 정수 3개 입력받아 가장 작은 수 출력하기


#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a <= b && a <= c) {
        printf("%d", a);
    }
    else if (b <= a && b <= c) {
        printf("%d", b);
    }
    else {
        printf("%d", c);
    }
    return 0;
}