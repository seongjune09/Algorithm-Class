# 5.

num = input().split()
count = 0
for i in num:
    if (int(i)%2==0):
        count += 1
print("짝수 개수: ", count)