#include <stdio.h>
int main(void) {
    char str[100];
    int len = 0;

    scanf("%s", str);

    while(str[len] != '\0') {
        len ++;
    }

    for(int i = 0; i < len; i++){
        if(str[i]!=str[len-i-1])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}