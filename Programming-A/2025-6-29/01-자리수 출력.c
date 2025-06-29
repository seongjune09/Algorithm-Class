#include <stdio.h>
int main(void) {
    int n;
    int b = 1;
    scanf("%d", &n);
    for(int i=1; i<=10; i++) {
        b *= 10;
        if(n - b < 0) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}