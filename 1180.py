a = int(input())

one = a % 10
ten = a // 10

sw = one * 10 + ten
sw = sw * 2

print(sw % 100) 

if sw % 100 <= 50:
    print("GOOD")
else:
    print("OH MY GOD")