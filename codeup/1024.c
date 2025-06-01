// 단어 1개 입력받아 나누어 출력하기

#include <stdio.h>
int main(void) {
    char str[101];
    scanf("%s", &str);
    for(int i=0; str[i] != '\0'; i++) {
        printf("'%c'\n", str[i]);
    }
    return 0;
}