#include <stdio.h>
int main(void) {
    
    int n;
    scanf("%d", &n);

    if (n >= 90) {
        printf("A");
    }
    else if (n >= 89) {
        printf("B");
    }
    else if (n >= 70) {
        printf("C");
    }
    else {
        printf("D");
    }
    return 0;
}