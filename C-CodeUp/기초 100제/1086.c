// 그림 파일 저장용량 계산하기

#include <stdio.h>
int main(void) {
    int w,h,b;
    scanf("%d %d %d", &w,&h,&b);
    
    double size = (double)w*h*b / 8 / 1024 / 1024;
    printf("%.2f MB", size);
    return 0;
}