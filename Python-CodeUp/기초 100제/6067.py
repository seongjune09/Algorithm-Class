# 정수 1개 입력받아 분류하기

n = int(input())

if n < 0 and n%2==0:
    print("A")
elif n < 0 and n%2==1:
    print("B")
elif n > 0 and n%2==0:
    print("C")
else :
    print("D")