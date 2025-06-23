#include <stdio.h>

int a = 10;
void f() {
    static int a = 5;
    a++;
    printf("%d", a);
}
int main(void) {
    f();
    f();
    f();
    printf("%d", a);
}