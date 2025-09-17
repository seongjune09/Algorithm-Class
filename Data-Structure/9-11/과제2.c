#include <stdio.h>

typedef struct
{
    char name[20]; // 이름을 저장
    int birth;     // 생일을 저장
} Author;          // Author이라는 이름의 구조체를 정의함

typedef struct
{
    char title[20]; // 제목을 저장
    int price;      // 가격을 저장
    Author author;  // Author의 이름,생일정보를 받음
} Book;             // Book 이라는 이름의 구조체를 정의함

int main()
{
    Book b1, b2; // 2개의 책의 정보를 받고 비교해야 함으로 책의 정보를 따로 저장하기 위해 b1과b2 입력받음
    scanf("%s %d %s %d", b1.title, &b1.price, b1.author.name, &b1.author.birth);
    // b1의 책 제목 - 가격 - 저자 이름 - 저자 생년 순으로 정보를 입력받음
    scanf("%s %d %s %d", b2.title, &b2.price, b2.author.name, &b2.author.birth);
    // b2의 책 제목 - 가격 - 저자 이름 - 저자 생년 순으로 정보를 입력받음
    if (b1.price < b2.price) // 가격이 낮은 책을 출력해야함으로 b1과 b2를 비교했을 때 b1이 b2보다 작으면
    {
        printf("%s %d %s %d\n", b1.title, b1.price, b1.author.name, b1.author.birth); // b1의 책,저자의 정보를 출력
    }
    else // b1이 b2보다 더 크다면
    {
        printf("%s %d %s %d\n", b2.title, b2.price, b2.author.name, b2.author.birth); // b2의 책,저자의 정보를 출력
    }
    return 0;
}