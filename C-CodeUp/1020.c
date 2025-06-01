// 주민번호 입력받아 형태바꿔 출력하기

#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d-%d", &n,&m);
    printf("%06d%07d", n,m);
    return 0;
}