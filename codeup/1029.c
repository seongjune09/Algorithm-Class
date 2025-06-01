//실수 1개 입력받아 그대로 출력하기2


#include <stdio.h>
int main(void) {
    double n;
    scanf("%lf", &n);
    printf("%.11lf", n);
    return 0;
}