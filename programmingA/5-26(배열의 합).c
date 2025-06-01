#include <stdio.h>
int main(void) {
    int arr[6],i;
    int sum=0;
    for(i=0; i<6; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}