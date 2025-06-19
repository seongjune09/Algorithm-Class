// 소리 파일 저장용량 계산하기

#include <stdio.h>
int main(void) {
    int h,b,c,s;
    scanf("%d %d %d %d", &h,&b,&c,&s);
    
    double size = (double)h*b*c*s / 8 / 1024 / 1024;
    printf("%.1f MB", size);
    return 0;
}