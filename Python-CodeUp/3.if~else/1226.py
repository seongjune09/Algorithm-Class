lotto = list(map(int, input().split()))
my = list(map(int, input().split()))

num = lotto[:6]
bonus = lotto[6]

count = 0
for number in my:
    if number in num :
        count += 1 

if count == 6:
    print(1)
elif count == 5 and bonus in my:
    print(2)
elif count == 5:
    print(3)
elif count == 4:
    print(4)
elif count == 3:
    print(5)
else:
    print(0)

