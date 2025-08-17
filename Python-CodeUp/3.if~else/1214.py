a, b = map(int, input().split())

num = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

if (a % 4 == 0 and a % 100 != 0) or (a % 400 == 0):
    num[2] = 29
    
print(num[b])