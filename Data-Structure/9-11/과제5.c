#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int score;
} Student;

int main(void)
{

    int n;
    scanf("%d", &n);

    Student *p = (Student *)malloc(n * sizeof(Student)); // malloc을 사용해서 n명의 학생정보를 저장할수 있는 구조체 배열

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", p[i].name, &p[i].score);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i].score;
    }

    double avg = sum / n;
    printf("%.2f", avg);

    free(p);

    return 0;
}