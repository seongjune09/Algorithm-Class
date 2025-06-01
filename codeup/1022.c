// 문장 1개 입력받아 그대로 출력하기

#include <stdio.h>
int main(void) {
    char data[2000];
    fgets(data,2000,stdin);
    printf("%s", data);
    return 0;
}