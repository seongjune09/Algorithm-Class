// 주사위를 2개 던지면?

#include <stdio.h>
int main(void)  {
    int n=3,m=6;
    scanf("%d %d", &n,&m);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            printf("%d %d\n", i,j);
        }
    }

    return 0;
}