// 평가 입력받아 다르게 출력하기


#include <stdio.h>
int main(void) {

    char n,A,B,C,D;
    scanf("%c", &n);

    if(n == 'A') {
        printf("best!!!\n");
    }
    else if(n == 'B') {
        printf("good!!\n");
    } 
    else if(n == 'C') {
        printf("run!\n");
    }
    else if(n == 'D') {
        printf("slowly~\n");
    }
    else {
        printf("what?\n");
    }
    return 0;
}