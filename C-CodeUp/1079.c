// 원하는 문자가 입력될 때까지 반복 출력하기

#include <stdio.h>
int main(void)  {
    char a;
    while (1) {
        scanf("%c", &a);
        printf("%c\n", a);
        if(a == 'q') {
            break;
        }
    }
    return 0;
}