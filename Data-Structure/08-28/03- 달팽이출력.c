#include <stdio.h>

int main(void) {
    int arr[101][101];
    int n;
    int d = 0;

    int dx[4]={1,0,-1,0}; 
    int dy[4]={0,1,0,-1};
    int x=0,y=0;

    scanf("%d",&n);

    for(int i=1;i<=n*n;i++)
    {

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}