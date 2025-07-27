# 언제까지 더해야 할까?

n = int(input())
count = 0
a = 0
for i in range(1,n+1):
    a += i
    count += 1
    if a >= n:
        break
print(count)
