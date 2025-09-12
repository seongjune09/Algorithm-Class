#include <stdio.h>
#include <stdlib.h> /*malloc을 사용하기 위한 헤더파일*/
int main(void) {
    int n;
    scanf("%d", &n); /*n까지 반복하기 위해 n을 입력받는다.*/

    int *arr = (int *) malloc (n * sizeof(int)); /*입력한 값을 저장하기 위한 배열*/

    for(int i=0; i<n; i++) { /*n까지 입력받기 위한 반복문*/
        scanf("%d", arr[i]); /*n까지 입력받은 값을 arr[i]에 저장*/
    }
}