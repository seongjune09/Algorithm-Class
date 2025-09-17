#include <stdio.h>
#include <string.h>

typedef struct // c에서 구조체를 정의하면 사용할 때마다 struct를 써야함 typedef를 쓰면 새로운 이름을 자료형처럼 바로 사용할 수 있음.
{
    char name[20];
    char phone[20];
} student;

int main(void)
{
    int n;
    scanf("%d", &n);

    student p[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", p[i].name, p[i].phone);
    }

    int q;
    scanf("%d", &q);

    char m[20];
    char result[q][20]; // 결과를 한번에 출력하기 위해 값 저장을 위한 변수

    for (int i = 0; i < q; i++)
    {
        scanf("%s", m); // 찾고 싶은 이름을 입력받음

        int found = 0;              // 0은 거짓이므로 찾지않았음을 표시
        for (int j = 0; j < n; j++) // 저장된 사람들을 j++하며 모두 확인하는 코드
        {
            if (strcmp(p[j].name, m) == 0) // strcmp는 두 문자열을 비교하는 함수임 따라서 p[j].name과 내가 찾고자 하는 이름이 같은지 확인하는 코드
            {
                strcpy(result[i], p[j].phone); // 문자열 src의 내용을 그대로 복사 검색 성공시 찾은 번호를 result[i]에 그대로 저장
                found = 1;                     // 1은 참이므로 찾았음을 알림
                break;                         // found가 1이므로 break실행
            }
        }
        if (!found)                         // 만약에 found가 0이면 if안에 문을 실해 1이면 건너뜀
            strcpy(result[i], "Not found"); // found가 0이여서 실행되면 같은 번호가 없으므로 "Not found"를 출력함
    }

    for (int i = 0; i < q; i++)
    {
        printf("%s\n", result[i]); // q번 까지 돌면서 result에 저장한 값을 출력
    }

    return 0;
}