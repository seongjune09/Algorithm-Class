#include <stdio.h>
int main(void) {

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int map[100][100] = {0,};

    int a,b, d = 0;
    int stx = 0, sty = 0;
    
    scanf("%d %d", &a,&b);

    for(int i=1; i<=a*b; i++) {
        map[stx][sty] = i;
        stx += dx[d];
        sty += dy[d];
        if(stx < 0 && ) {

        }
    }
    


}