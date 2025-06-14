// 함께 문제 푸는 날                

#include <stdio.h>
int main(void) {
    long long a,b,c;
    scanf("%lld %lld %lld", &a,&b,&c);
    long long day = 1;
    while (day%a!=0||day%b!=0||day%c!=0) {
        day++;
    }
    printf("%lld", day);
    return 0;
}