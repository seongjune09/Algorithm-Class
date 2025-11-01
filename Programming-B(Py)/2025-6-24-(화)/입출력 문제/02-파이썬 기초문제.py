# 구구단 게임 > 컴퓨터가 1~9 사이의 두 개의 무작위 정수를 생성하고 두 수의 곱을 물어봅니다.
# 사용자가 답을 입력하여 맞으면 ’정답입니다.‘ 틀리면 ’구구단 공부합시다.‘를 출력하는 프로그램 작성해 봅시다.

import random 
x = random.randint(1,9)
y = random.randint(1,9)

a = int(input(f'{x}*{y}는 무엇일까요? : '))
if a == x * y:
    print("정답입니다.")
else:
    print("구구단 공부합시다.")

