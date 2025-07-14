# 정수 3개 입력받아 합과 평균 출력하기

a,b,c = map(int, input().split())
c = a + b + c
print(c, format(c/3, ".2f"))