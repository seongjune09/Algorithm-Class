#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int k;
    int m;
    int e;
} Score;

int main(void)
{

    int n;
    int total = 0;
    scanf("%d", &n);

    Score *p = (Score *)malloc(n * sizeof(Score));

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", p[i].name, &p[i].k, &p[i].m, &p[i].e);
        total += p[i].k + p[i].m + p[i].e;

        // if ()  { // 총점이 같을 시 오름차순을 어떻게 할지 모르겠습니다

        // }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d\n", p[i].name, p[i].k, p[i].m, p[i].e);
    }

    free(p);
    return 0;
}