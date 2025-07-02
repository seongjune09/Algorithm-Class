#include <stdio.h>

int a = 10;
void f() {
    static int a = 5; 
    //static은 한번만 초기화함으로 한번 더한 후 초기화 하지않고그대로 더한다
 
    printf("%d\n", a);
    a++;
}
int main(void) {
    f();
    f();
    f();
    printf("%d", a);
}