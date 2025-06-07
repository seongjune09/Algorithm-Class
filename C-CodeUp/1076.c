// 문자 1개 입력받아 알파벳 출력하기

#include <stdio.h>
int main(void)  {
    char n;
    scanf("%c", &n);
    for(char c='a'; c <= n; c++) {
        printf("%c ", c);
    }

    return 0;
}