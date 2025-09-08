#include <stdio.h>
int main(void) {

    char n[101];
    int sum = 0;

    scanf("%s", n);

    for(int i=0; i<sizeof(n); i++) {
        if (n[i] >= '0' && n[i] <= '9') {
            sum += n[i]-'0';
        }   
    }

    printf("%d\n", sum);
    return 0;
}