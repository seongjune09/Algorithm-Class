a = int(input())  # 1~100 사이의 정수 입력받기

if 11 <= a <= 13:
    print(f"{a}th")
elif a % 10 == 1:
    print(f"{a}st")
elif a % 10 == 2:
    print(f"{a}nd")
elif a % 10 == 3:
    print(f"{a}rd")
else:
    print(f"{a}th")