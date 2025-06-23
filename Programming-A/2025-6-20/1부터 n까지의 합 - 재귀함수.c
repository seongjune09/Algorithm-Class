#include <stdio.h>

int main(void) {
    int n = 0;
    scanf("%d", &n);
    
}

int f(int n) 
{
    if(n == 1) {
        return f(n-1)+ n;
    }
}