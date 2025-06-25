# 세 수를 입력 받아 가장 큰 수를 출력해 봅시다.

a = int(input("첫번째 숫자: "))
b = int(input("두번째 숫자: "))
c = int(input("세번째 숫자: "))
 
if a >= b and a >= c:
    print(f"가장 큰 수는{a}")
elif b >= a and b >= c:
    print(f"가장 큰 수는 {b}")
else:
    print(f"가장 큰 수는 {c}")