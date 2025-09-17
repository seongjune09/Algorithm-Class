#include <stdio.h>

typedef struct
{
    int year;
    int month;
    int day;
} Date;

typedef struct
{
    char name[20];
    int empid;
    Date date;
} Employee;

int main(void)
{

    Employee E1, E2, E3;
    scanf("%s %d %d %d %d", E1.name, &E1.empid, &E1.date.year, &E1.date.month, &E1.date.day);
    scanf("%s %d %d %d %d", E2.name, &E2.empid, &E2.date.year, &E2.date.month, &E2.date.day);
    scanf("%s %d %d %d %d", E3.name, &E3.empid, &E3.date.year, &E3.date.month, &E3.date.day);

    if (E1.date.year < E2.date.year && E1.date.year < E3.date.year)
    {
        printf("%s %d %d-%d-0%d", E1.name, E1.empid, E1.date.year, E1.date.month, E1.date.day);
    }
    else if (E2.date.year < E1.date.year && E2.date.year < E3.date.year)
    {
        printf("%s %d %d-%d-0%d", E2.name, E2.empid, E2.date.year, E2.date.month, E2.date.day);
    }
    else
    {
        printf("%s %d %d-%d-0%d", E3.name, E3.empid, E3.date.year, E3.date.month, E3.date.day);
    }
    return 0;
}