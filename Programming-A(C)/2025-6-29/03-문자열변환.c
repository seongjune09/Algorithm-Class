#include <stdio.h>
int main(void) {

    char str[100];

    scanf("%s", str);
    for(int i=0; i<100; i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
        else if(str[i]=='\0')
        {
            break;
        }
        else {
            str[i] -= 32;
        }
    }
    printf("%s", str);
    return 0;
}