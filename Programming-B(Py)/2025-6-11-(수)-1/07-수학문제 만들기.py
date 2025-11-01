import random
number = [10,20,33,40,55,60,77,80,90,100]

a = random.choice(number)
b = random.choice(number)

user = int(input(f"{a} + {b} = ? "))

if user == a+b:
    print("맞았습니다.")
else:
    print("틀렸습니다.")
    