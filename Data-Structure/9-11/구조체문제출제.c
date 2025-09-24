// 구조체 people(회사이름, 이름)와 구조체 Salary(초봉, 연봉(people))를 정의하고 3명의 사람의 정보를 입력받아
// 초봉이 가장 높은 사람과 연봉이 가장 높은 사람을 출력하시오

#include <stdio.h>

typedef struct
{
    char company[20];
    char name[10];
} People;

typedef struct
{
    int starting_salary;
    int yearly_salary;
    People p;
} Salary;

int main(void)
{

    Salary arr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s %s %d %d", arr[i].p.company, arr[i].p.name, &arr[i].starting_salary, &arr[i].yearly_salary);
    }

    int max_s = 0, max_y = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i].starting_salary > arr[max_s].starting_salary)
        {
            max_s = i;
        }

        if (arr[i].yearly_salary > arr[max_y].yearly_salary)
        {
            max_y = i;
        }
    }

    printf("최고 초봉 : %s %d만원\n", arr[max_s].p.name, arr[max_s].starting_salary);
    printf("최고 연봉 : %s %d만원\n", arr[max_y].p.name, arr[max_y].yearly_salary);
}
